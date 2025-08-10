#include <webbind/CSSScopeRule.hpp>

namespace webbind {

CSSScopeRule CSSScopeRule::take_ownership(Handle h) noexcept {
        return CSSScopeRule(h);
    }
CSSScopeRule CSSScopeRule::clone() const noexcept { return *this; }
emlite::Val CSSScopeRule::instance() noexcept { return emlite::Val::global("CSSScopeRule"); }
CSSScopeRule::CSSScopeRule(Handle h) noexcept : CSSGroupingRule(emlite::Val::take_ownership(h)) {}
CSSScopeRule::CSSScopeRule(const emlite::Val &val) noexcept: CSSGroupingRule(val) {}

jsbind::String CSSScopeRule::start() const {
    return CSSGroupingRule::get("start").as<jsbind::String>();
}

jsbind::String CSSScopeRule::end() const {
    return CSSGroupingRule::get("end").as<jsbind::String>();
}


} // namespace webbind