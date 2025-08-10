#include <webbind/CSSParserOptions.hpp>

namespace webbind {

CSSParserOptions::CSSParserOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSParserOptions CSSParserOptions::take_ownership(Handle h) noexcept {
    return CSSParserOptions(h);
}

CSSParserOptions::CSSParserOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

CSSParserOptions::CSSParserOptions() noexcept: emlite::Val(emlite::Val::object()) {}

CSSParserOptions CSSParserOptions::clone() const noexcept { return *this; }

jsbind::Object CSSParserOptions::atRules() const {
    return emlite::Val::get("atRules").as<jsbind::Object>();
}

void CSSParserOptions::atRules(const jsbind::Object& value) {
    emlite::Val::set("atRules", value);
}


} // namespace webbind