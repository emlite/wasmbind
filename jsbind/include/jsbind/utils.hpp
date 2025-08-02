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
        static emlite::Val instance() noexcept;            \
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
    emlite::Val name::instance() noexcept {                \
        return emlite::Val::global(#name);                 \
    }                                                      \
    DEFINE_CLONE(name)

namespace jsbind {
using emlite::Option;
using emlite::Result;
using emlite::some;
using emlite::none;
using emlite::nullopt;

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
}
