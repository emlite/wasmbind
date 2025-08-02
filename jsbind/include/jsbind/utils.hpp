#pragma once

#include <emlite/emlite.hpp>

#define DECLARE_CLONE(x) x clone() const noexcept;

#define DEFINE_CLONE(x)                                    \
    x x::clone() const noexcept { return *this; }

#define DECLARE_ARRAY(name, int_ty)                        \
    class name : public TypedArray<int_ty> {               \
        explicit name(Handle h) noexcept;                  \
                                                           \
      public:                                              \
        using TypedArray<int_ty>::call;                    \
        name() noexcept;                                   \
        static name take_ownership(Handle h) noexcept;     \
        explicit name(const emlite::Val &val) noexcept;    \
        [[nodiscard]] name subarray(                       \
            size_t begin, size_t end = SIZE_MAX            \
        ) const;                                           \
        static name from(int_ty *arr, size_t len);         \
        DECLARE_CLONE(name)                                \
    };

#define DEFINE_ARRAY(name, int_ty)                         \
    name::name(Handle h) noexcept                          \
        : TypedArray(TypedArray<int_ty>::take_ownership(h) \
          ) {}                                             \
    name::name() noexcept                                  \
        : TypedArray<int_ty>(                              \
              emlite::Val::global(#name).new_()            \
          ) {}                                             \
    name name::take_ownership(Handle h) noexcept {         \
        return name(h);                                    \
    }                                                      \
    name::name(const emlite::Val &val) noexcept            \
        : TypedArray<int_ty>(val) {}                       \
    name name::subarray(size_t begin, size_t end) const {  \
        return TypedArray<int_ty>::call(                   \
                   "subarray", begin, end                  \
        )                                                  \
            .as<name>();                                   \
    }                                                      \
    name name::from(int_ty *arr, size_t len) {             \
        auto temp = emlite::Val::array();                  \
        for (auto i = 0; i < len; i++) {                   \
            emlite::Val num(arr[i]);                       \
            temp.call("push", num);                        \
        }                                                  \
        return name(                                       \
            emlite::Val::global(#name).call("from", temp)  \
        );                                                 \
    }                                                      \
    DEFINE_CLONE(name)

// ========== ERROR HANDLING UTILITIES ==========

namespace jsbind {

/// Null type for Option
struct NullOpt {
    explicit constexpr NullOpt() = default;
};
constexpr NullOpt nullopt{};

/// Custom Option class (no std library dependency)
template<typename T>
class Option {
    bool has_value_;
    union {
        T value_;
        char dummy_;
    };

public:
    Option() noexcept : has_value_(false), dummy_(0) {}
    
    Option(NullOpt) noexcept : has_value_(false), dummy_(0) {}
    
    Option(T value) noexcept : has_value_(true), value_(emlite::detail::move(value)) {}

    Option(const Option& other) noexcept : has_value_(other.has_value_) {
        if (has_value_) {
            new (&value_) T(other.value_);
        } else {
            dummy_ = 0;
        }
    }

    Option& operator=(const Option& other) noexcept {
        if (this == &other) return *this;
        
        if (has_value_) {
            value_.~T();
        }
        
        has_value_ = other.has_value_;
        if (has_value_) {
            new (&value_) T(other.value_);
        } else {
            dummy_ = 0;
        }
        return *this;
    }

    Option(Option&& other) noexcept : has_value_(other.has_value_) {
        if (has_value_) {
            new (&value_) T(emlite::detail::move(other.value_));
            other.value_.~T();
        } else {
            dummy_ = 0;
        }
        other.has_value_ = false;
        other.dummy_ = 0;
    }

    Option& operator=(Option&& other) noexcept {
        if (this == &other) return *this;
        
        if (has_value_) {
            value_.~T();
        }
        
        has_value_ = other.has_value_;
        if (has_value_) {
            new (&value_) T(emlite::detail::move(other.value_));
            other.value_.~T();
        } else {
            dummy_ = 0;
        }
        other.has_value_ = false;
        other.dummy_ = 0;
        return *this;
    }

    ~Option() {
        if (has_value_) {
            value_.~T();
        }
    }

    [[nodiscard]] bool has_value() const noexcept { return has_value_; }
    explicit operator bool() const noexcept { return has_value_; }

    const T& value() const {
        if (!has_value_) {
            emlite::Val::throw_(emlite::Val::global("Error").new_("Option has no value"));
        }
        return value_;
    }

    T& value() {
        if (!has_value_) {
            emlite::Val::throw_(emlite::Val::global("Error").new_("Option has no value"));
        }
        return value_;
    }

    const T& operator*() const { return value(); }
    T& operator*() { return value(); }

    const T* operator->() const { return &value(); }
    T* operator->() { return &value(); }

    T value_or(const T& default_value) const {
        return has_value_ ? value_ : default_value;
    }

    T unwrap() const {
        return value();
    }

    T expect(const char* message) const {
        if (!has_value_) {
            emlite::Val::throw_(emlite::Val::global("Error").new_(message));
        }
        return value_;
    }

    void reset() {
        if (has_value_) {
            value_.~T();
            has_value_ = false;
            dummy_ = 0;
        }
    }

    template<typename F>
    auto map(F&& func) const -> Option<decltype(func(value_))> {
        using U = decltype(func(value_));
        if (has_value_) {
            return Option<U>(emlite::detail::forward<F>(func)(value_));
        }
        return Option<U>();
    }
};

/// Create Option with value
template<typename T>
Option<T> some(T&& value) {
    return Option<T>(emlite::detail::forward<T>(value));
}

/// Create empty Option
template<typename T>
Option<T> none() {
    return Option<T>();
}

/// Custom Result class (no std library dependency)
template<typename T>
class Result {
    bool has_value_;
    bool has_error_;
    union {
        T value_;
        emlite::Val error_;
        char dummy_ {};
    };

public:
    Result(T value) noexcept : has_value_(true), has_error_(false), value_(emlite::detail::move(value)) {}
    
    Result(emlite::Val error) noexcept : has_value_(false), has_error_(true), error_(emlite::detail::move(error)) {}

    Result(const Result& other) noexcept : has_value_(other.has_value_), has_error_(other.has_error_) {
        if (has_value_) {
            new (&value_) T(other.value_);
        } else if (has_error_) {
            new (&error_) emlite::Val(other.error_);
        } else {
            dummy_ = 0;
        }
    }

    Result& operator=(const Result& other) noexcept {
        if (this == &other) return *this;
        
        if (has_value_) {
            value_.~T();
        } else if (has_error_) {
            error_.~Val();
        }
        
        has_value_ = other.has_value_;
        has_error_ = other.has_error_;
        
        if (has_value_) {
            new (&value_) T(other.value_);
        } else if (has_error_) {
            new (&error_) emlite::Val(other.error_);
        } else {
            dummy_ = 0;
        }
        return *this;
    }

    Result(Result&& other) noexcept : has_value_(other.has_value_), has_error_(other.has_error_) {
        if (has_value_) {
            new (&value_) T(emlite::detail::move(other.value_));
            other.value_.~T();
        } else if (has_error_) {
            new (&error_) emlite::Val(emlite::detail::move(other.error_));
            other.error_.~Val();
        } else {
            dummy_ = 0;
        }
        other.has_value_ = false;
        other.has_error_ = false;
        other.dummy_ = 0;
    }

    Result& operator=(Result&& other) noexcept {
        if (this == &other) return *this;
        
        if (has_value_) {
            value_.~T();
        } else if (has_error_) {
            error_.~Val();
        }
        
        has_value_ = other.has_value_;
        has_error_ = other.has_error_;
        
        if (has_value_) {
            new (&value_) T(emlite::detail::move(other.value_));
            other.value_.~T();
        } else if (has_error_) {
            new (&error_) emlite::Val(emlite::detail::move(other.error_));
            other.error_.~Val();
        } else {
            dummy_ = 0;
        }
        other.has_value_ = false;
        other.has_error_ = false;
        other.dummy_ = 0;
        return *this;
    }

    ~Result() {
        if (has_value_) {
            value_.~T();
        } else if (has_error_) {
            error_.~Val();
        }
    }

    [[nodiscard]] bool has_value() const noexcept { return has_value_; }
    [[nodiscard]] bool is_error() const noexcept { return has_error_; }
    explicit operator bool() const noexcept { return has_value_; }

    const T& value() const {
        if (!has_value_) {
            if (has_error_) {
                emlite::Val::throw_(error_);
            }
            emlite::Val::throw_(emlite::Val::global("Error").new_("Result has no value"));
        }
        return value_;
    }

    T& value() {
        if (!has_value_) {
            if (has_error_) {
                emlite::Val::throw_(error_);
            }
            emlite::Val::throw_(emlite::Val::global("Error").new_("Result has no value"));
        }
        return value_;
    }

    const T& operator*() const { return value(); }
    T& operator*() { return value(); }

    const T* operator->() const { return &value(); }
    T* operator->() { return &value(); }

    T value_or(const T& default_value) const {
        return has_value_ ? value_ : default_value;
    }

    T unwrap() const {
        return value();
    }

    [[nodiscard]] const emlite::Val& error() const {
        if (!has_error_) {
            emlite::Val::throw_(emlite::Val::global("Error").new_("Result has no error"));
        }
        return error_;
    }

    template<typename F>
    auto map(F&& func) const -> Result<decltype(func(value_))> {
        using U = decltype(func(value_));
        if (has_value_) {
            return Result<U>(emlite::detail::forward<F>(func)(value_));
        } else if (has_error_) {
            return Result<U>(error_);
        } else {
            return Result<U>(emlite::Val::global("Error").new_("Empty result"));
        }
    }

    template<typename F>
    auto and_then(F&& func) const -> decltype(func(value_)) {
        if (has_value_) {
            return emlite::detail::forward<F>(func)(value_);
        } else if (has_error_) {
            return decltype(func(value_))(error_);
        } else {
            return decltype(func(value_))(emlite::Val::global("Error").new_("Empty result"));
        }
    }
};

/// Throw a JavaScript exception from C++
[[noreturn]] inline void throw_js(const char* message) {
    auto error = emlite::Val::global("Error").new_(message);
    emlite::Val::throw_(emlite::detail::move(error));
    __builtin_unreachable();
}

/// Throw a JavaScript exception from C++ with an Error object
[[noreturn]] inline void throw_js(const emlite::Val& error) {
    emlite::Val::throw_(error);
    __builtin_unreachable();
}

/// Safe JavaScript operation wrapper
template<typename F>
auto try_js(F&& func) -> Result<decltype(func())> {
    // Note: We can't catch arbitrary exceptions without std library
    // This is a simplified version that works with emlite's error handling
    return Result<decltype(func())>(func());
}

/// Type checking utilities
template<typename T>
bool is_type(const emlite::Val& val) noexcept {
    // Simple type checking - would need custom implementation
    // for full type safety without exceptions
    return true; // Simplified for now
}

/// Safe array bounds checking
template<typename Array>
class SafeArrayAccess {
    Array& array_;

    // Simple integer to string conversion (no std library)
    static void int_to_str(size_t num, char* buffer, size_t buffer_size) {
        if (buffer_size == 0) return;
        
        if (num == 0) {
            buffer[0] = '0';
            buffer[1] = '\0';
            return;
        }
        
        size_t pos = 0;
        size_t temp = num;
        
        // Count digits
        while (temp > 0 && pos < buffer_size - 1) {
            temp /= 10;
            pos++;
        }
        
        buffer[pos] = '\0';
        
        // Fill digits backwards
        while (num > 0 && pos > 0) {
            buffer[--pos] = '0' + (num % 10);
            num /= 10;
        }
    }

public:
    explicit SafeArrayAccess(Array& array) : array_(array) {}

    auto at(size_t index) -> decltype(array_[index]) {
        if (index >= array_.size()) {
            char index_str[32];
            char size_str[32];
            int_to_str(index, index_str, sizeof(index_str));
            int_to_str(array_.size(), size_str, sizeof(size_str));
            
            // Simple string concatenation without std library
            char message[128] = "Array index ";
            size_t len = 12; // length of "Array index "
            
            // Append index
            for (size_t i = 0; index_str[i] && len < 127; i++, len++) {
                message[len] = index_str[i];
            }
            
            // Append " out of bounds (size: "
            const char* middle = " out of bounds (size: ";
            for (size_t i = 0; middle[i] && len < 127; i++, len++) {
                message[len] = middle[i];
            }
            
            // Append size
            for (size_t i = 0; size_str[i] && len < 127; i++, len++) {
                message[len] = size_str[i];
            }
            
            // Append ")"
            if (len < 127) message[len++] = ')';
            message[len] = '\0';
            
            throw_js(message);
        }
        return array_[index];
    }

    auto operator[](size_t index) -> decltype(array_[index]) {
        return at(index);
    }
};

/// Make safe array accessor
template<typename Array>
SafeArrayAccess<Array> safe(Array& array) {
    return SafeArrayAccess<Array>(array);
}

} // namespace jsbind