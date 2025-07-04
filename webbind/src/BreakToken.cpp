#include <webbind/BreakToken.hpp>
#include <webbind/ChildBreakToken.hpp>


BreakToken BreakToken::take_ownership(Handle h) noexcept {
        return BreakToken(h);
    }
BreakToken BreakToken::clone() const noexcept { return *this; }
BreakToken::BreakToken(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BreakToken::BreakToken(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::FrozenArray<ChildBreakToken> BreakToken::childBreakTokens() const {
    return emlite::Val::get("childBreakTokens").as<jsbind::FrozenArray<ChildBreakToken>>();
}

jsbind::Any BreakToken::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

