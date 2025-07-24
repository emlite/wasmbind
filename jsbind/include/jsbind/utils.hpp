#pragma once

#define DECLARE_CLONE(x) x clone() const noexcept;

#define DEFINE_CLONE(x)                                    \
    x x::clone() const noexcept { return *this; }

#define DECLARE_STRING(x)                                  \
    class x : public String {                              \
        explicit x(Handle h) noexcept;                     \
                                                           \
      public:                                              \
        static x take_ownership(Handle h) noexcept;        \
        explicit x(const emlite::Val &val) noexcept;       \
        x(const char *s);                                  \
        DECLARE_CLONE(x)                                   \
    };

#define DEFINE_STRING(x)                                   \
    x::x(Handle h) noexcept                                \
        : String(emlite::Val::take_ownership(h)) {}        \
    x x::take_ownership(Handle h) noexcept {               \
        return x(h);                                       \
    }                                                      \
    x::x(const char *s) : String(s) {}                     \
    x::x(const emlite::Val &val) noexcept : String(val) {} \
    DEFINE_CLONE(x)

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
        EM_IF_STD_SPAN(                                    \
            static name from(std::span<int_ty> s);         \
        )                                                  \
        EM_IF_STD_SPAN(std::vector<int_ty> to_vector()     \
                           const;)                         \
        DECLARE_CLONE(name)                                \
    };

#define DEFINE_ARRAY(name, int_ty)                         \
    name::name(Handle h) noexcept                          \
        : TypedArray(TypedArray<int_ty>::take_ownership(h) \
          ) {}                                             \
    name::name() noexcept                                  \
        : TypedArray<int_ty>(emlite::Val::array()) {}      \
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
    EM_IF_STD_SPAN(name name::from(std::span<int_ty> s) {  \
        return from(s.data(), s.size());                   \
    })                                                     \
    EM_IF_STD_SPAN(std::vector<int_ty> name::to_vector(    \
    ) const {                                              \
        std::vector<int_ty> vec;                           \
        for (size_t i = 0; i < this->size(); i++) {        \
            vec.push_back(this->get(i).as<int_ty>());      \
        }                                                  \
        return vec;                                        \
    })                                                     \
    DEFINE_CLONE(name)