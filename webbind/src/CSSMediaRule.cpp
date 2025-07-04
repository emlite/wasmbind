#include <webbind/CSSMediaRule.hpp>
#include <webbind/MediaList.hpp>


CSSMediaRule CSSMediaRule::take_ownership(Handle h) noexcept {
        return CSSMediaRule(h);
    }
CSSMediaRule CSSMediaRule::clone() const noexcept { return *this; }
CSSMediaRule::CSSMediaRule(Handle h) noexcept : CSSConditionRule(emlite::Val::take_ownership(h)) {}
CSSMediaRule::CSSMediaRule(const emlite::Val &val) noexcept: CSSConditionRule(val) {}


MediaList CSSMediaRule::media() const {
    return CSSConditionRule::get("media").as<MediaList>();
}

bool CSSMediaRule::matches() const {
    return CSSConditionRule::get("matches").as<bool>();
}

