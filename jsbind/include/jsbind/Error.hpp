#pragma once

#include "String.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {
class Error : public emlite::Val {
    explicit Error(Handle h) noexcept;

  public:
    static Error take_ownership(Handle h) noexcept;
    Error(const emlite::Val &val) noexcept;
    /* Construct `new Error(msg)` */
    Error(const char *msg) noexcept;

    /* JS err.message */
    [[nodiscard]] String message() const;

    /* JS err.name */
    [[nodiscard]] String name() const;

    /* JS err.stack  →  returns `false` if undefined * out
     * is left untouched on failure                       */
    bool stack(String &out) const;
};

#define DECLARE_JS_ERROR(NAME)                             \
    class NAME : public Error {                            \
        explicit NAME(Handle h) noexcept;                  \
                                                           \
      public:                                              \
        static NAME take_ownership(Handle h) noexcept;     \
        NAME(const emlite::Val &val) noexcept;             \
        NAME(const char *msg) noexcept;                    \
    };

DECLARE_JS_ERROR(EvalError)
DECLARE_JS_ERROR(RangeError)
DECLARE_JS_ERROR(ReferenceError)
DECLARE_JS_ERROR(SyntaxError)
DECLARE_JS_ERROR(TypeError)
DECLARE_JS_ERROR(URIError)
DECLARE_JS_ERROR(AggregateError)

#undef DECLARE_JS_ERROR
} // namespace jsbind