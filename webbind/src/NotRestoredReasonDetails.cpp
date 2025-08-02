#include <webbind/NotRestoredReasonDetails.hpp>


NotRestoredReasonDetails NotRestoredReasonDetails::take_ownership(Handle h) noexcept {
        return NotRestoredReasonDetails(h);
    }
NotRestoredReasonDetails NotRestoredReasonDetails::clone() const noexcept { return *this; }
emlite::Val NotRestoredReasonDetails::instance() noexcept { return emlite::Val::global("NotRestoredReasonDetails"); }
NotRestoredReasonDetails::NotRestoredReasonDetails(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NotRestoredReasonDetails::NotRestoredReasonDetails(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String NotRestoredReasonDetails::reason() const {
    return emlite::Val::get("reason").as<jsbind::String>();
}

jsbind::Object NotRestoredReasonDetails::toJSON() {
    return emlite::Val::call("toJSON").as<jsbind::Object>();
}

