#pragma once

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