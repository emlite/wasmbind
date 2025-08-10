#include "webbind/GetNotificationOptions.hpp"

using emlite::Val;
namespace webbind {

GetNotificationOptions::GetNotificationOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetNotificationOptions GetNotificationOptions::take_ownership(Handle h) noexcept {
        return GetNotificationOptions(h);
    }
GetNotificationOptions::GetNotificationOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GetNotificationOptions::GetNotificationOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GetNotificationOptions GetNotificationOptions::clone() const noexcept { return *this; }

jsbind::String GetNotificationOptions::tag() const {
    return emlite::Val::get("tag").as<jsbind::String>();
}

void GetNotificationOptions::tag(const jsbind::String& value) {
    emlite::Val::set("tag", value);
}


} // namespace webbind