#include <webbind/CSSParserRule.hpp>

namespace webbind {

CSSParserRule CSSParserRule::take_ownership(Handle h) noexcept {
    return CSSParserRule(h);
}

CSSParserRule CSSParserRule::clone() const noexcept { return *this; }

emlite::Val CSSParserRule::instance() noexcept { return emlite::Val::global("CSSParserRule"); }

CSSParserRule::CSSParserRule(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

CSSParserRule::CSSParserRule(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind