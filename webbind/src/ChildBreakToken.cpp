#include <webbind/ChildBreakToken.hpp>
#include <webbind/LayoutChild.hpp>


ChildBreakToken ChildBreakToken::take_ownership(Handle h) noexcept {
        return ChildBreakToken(h);
    }
ChildBreakToken ChildBreakToken::clone() const noexcept { return *this; }
ChildBreakToken::ChildBreakToken(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ChildBreakToken::ChildBreakToken(const emlite::Val &val) noexcept: emlite::Val(val) {}


BreakType ChildBreakToken::breakType() const {
    return emlite::Val::get("breakType").as<BreakType>();
}

LayoutChild ChildBreakToken::child() const {
    return emlite::Val::get("child").as<LayoutChild>();
}

