#include <webbind/PushEvent.hpp>
#include <webbind/PushMessageData.hpp>


PushEvent PushEvent::take_ownership(Handle h) noexcept {
        return PushEvent(h);
    }
PushEvent PushEvent::clone() const noexcept { return *this; }
PushEvent::PushEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PushEvent::PushEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}


PushEvent::PushEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("PushEvent").new_(type)) {}

PushEvent::PushEvent(const jsbind::String& type, const jsbind::Any& eventInitDict) : ExtendableEvent(emlite::Val::global("PushEvent").new_(type, eventInitDict)) {}

PushMessageData PushEvent::data() const {
    return ExtendableEvent::get("data").as<PushMessageData>();
}

