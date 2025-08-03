#pragma once

#include <emlite/emlite.hpp>

#define DECLARE_CLONE(x) x clone() const noexcept;

#define DEFINE_CLONE(x)                                                                            \
    x x::clone() const noexcept { return *this; }

#define DECLARE_ARRAY(name, int_ty)                                                                \
    class name : public TypedArray<int_ty> {                                                       \
        explicit name(Handle h) noexcept;                                                          \
                                                                                                   \
      public:                                                                                      \
        using TypedArray<int_ty>::call;                                                            \
        name() noexcept;                                                                           \
        static name take_ownership(Handle h) noexcept;                                             \
        explicit name(const emlite::Val &val) noexcept;                                            \
        static emlite::Val instance() noexcept;                                                    \
        [[nodiscard]] name subarray(size_t begin, size_t end = SIZE_MAX) const;                    \
        static name from(int_ty *arr, size_t len);                                                 \
        DECLARE_CLONE(name)                                                                        \
    };

#define DEFINE_ARRAY(name, int_ty)                                                                 \
    name::name(Handle h) noexcept : TypedArray(TypedArray<int_ty>::take_ownership(h)) {}           \
    name::name() noexcept : TypedArray<int_ty>(emlite::Val::global(#name).new_()) {}               \
    name name::take_ownership(Handle h) noexcept { return name(h); }                               \
    name::name(const emlite::Val &val) noexcept : TypedArray<int_ty>(val) {}                       \
    name name::subarray(size_t begin, size_t end) const {                                          \
        return TypedArray<int_ty>::call("subarray", begin, end).as<name>();                        \
    }                                                                                              \
    name name::from(int_ty *arr, size_t len) {                                                     \
        auto temp = emlite::Val::array();                                                          \
        for (auto i = 0; i < len; i++) {                                                           \
            emlite::Val num(arr[i]);                                                               \
            temp.call("push", num);                                                                \
        }                                                                                          \
        return name(emlite::Val::global(#name).call("from", temp));                                \
    }                                                                                              \
    emlite::Val name::instance() noexcept { return emlite::Val::global(#name); }                   \
    DEFINE_CLONE(name)

namespace jsbind {
using emlite::err;
using emlite::none;
using emlite::nullopt;
using emlite::ok;
using emlite::Option;
using emlite::Result;
using emlite::some;

/// Throw a JavaScript exception from C++
[[noreturn]] inline void throw_js(const char *message) {
    auto error = emlite::Val::global("Error").new_(message);
    emlite::Val::throw_(emlite::detail::move(error));
    __builtin_unreachable();
}

/// Throw a JavaScript exception from C++ with an Error object
[[noreturn]] inline void throw_js(const emlite::Val &error) {
    emlite::Val::throw_(error);
    __builtin_unreachable();
}
template<typename ...Args>
emlite::Uniq<char[]> format(const char *fmt, Args...args) {
    auto sz = snprintf(NULL, 0, fmt, args...) + 1;
    auto buf = (char *)malloc(sz);
    snprintf(buf, sz, fmt, args...);
    return emlite::Uniq<char[]>(buf);
}
} // namespace jsbind
