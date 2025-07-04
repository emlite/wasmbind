#include <webbind/CSSParserValue.hpp>


CSSParserValue CSSParserValue::take_ownership(Handle h) noexcept {
        return CSSParserValue(h);
    }
CSSParserValue CSSParserValue::clone() const noexcept { return *this; }
CSSParserValue::CSSParserValue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSParserValue::CSSParserValue(const emlite::Val &val) noexcept: emlite::Val(val) {}


