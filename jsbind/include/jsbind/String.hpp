#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class String : public emlite::Val {
    explicit String(Handle h) noexcept;

  public:
    static String take_ownership(Handle h) noexcept;
    explicit String(const emlite::Val &v) noexcept;
    String() noexcept;

    explicit String(const char *utf8);

    [[nodiscard]] size_t size() const;
    [[nodiscard]] bool empty() const;

    char operator[](size_t i) const;

    friend String operator+(
        const String &a, const String &b
    );

    DECLARE_CLONE(String)
};

DECLARE_STRING(ByteString)

DECLARE_STRING(DOMString)

DECLARE_STRING(CSSOMString)

DECLARE_STRING(USVString)

} // namespace jsbind