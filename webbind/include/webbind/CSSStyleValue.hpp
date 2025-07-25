#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleValue;


class CSSStyleValue : public emlite::Val {
    explicit CSSStyleValue(Handle h) noexcept;

public:
    explicit CSSStyleValue(const emlite::Val &val) noexcept;
    static CSSStyleValue take_ownership(Handle h) noexcept;

    CSSStyleValue clone() const noexcept;
    static CSSStyleValue parse(const jsbind::USVString& property, const jsbind::USVString& cssText);
    static jsbind::Sequence<CSSStyleValue> parseAll(const jsbind::USVString& property, const jsbind::USVString& cssText);
};

