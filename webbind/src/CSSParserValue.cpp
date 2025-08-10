#include <webbind/CSSParserValue.hpp>

namespace webbind {

CSSParserValue CSSParserValue::take_ownership(Handle h) noexcept {
        return CSSParserValue(h);
    }
CSSParserValue CSSParserValue::clone() const noexcept { return *this; }
emlite::Val CSSParserValue::instance() noexcept { return emlite::Val::global("CSSParserValue"); }
CSSParserValue::CSSParserValue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSParserValue::CSSParserValue(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind