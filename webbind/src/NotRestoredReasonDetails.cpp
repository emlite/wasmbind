#include <webbind/NotRestoredReasonDetails.hpp>


NotRestoredReasonDetails NotRestoredReasonDetails::take_ownership(Handle h) noexcept {
        return NotRestoredReasonDetails(h);
    }
NotRestoredReasonDetails NotRestoredReasonDetails::clone() const noexcept { return *this; }
NotRestoredReasonDetails::NotRestoredReasonDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NotRestoredReasonDetails::NotRestoredReasonDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString NotRestoredReasonDetails::reason() const {
    return emlite::Val::get("reason").as<jsbind::DOMString>();
}

jsbind::Object NotRestoredReasonDetails::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

