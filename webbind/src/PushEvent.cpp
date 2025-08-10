#include <webbind/PushEvent.hpp>
#include <webbind/PushEventInit.hpp>
#include <webbind/PushMessageData.hpp>

namespace webbind {

PushEvent PushEvent::take_ownership(Handle h) noexcept {
        return PushEvent(h);
    }
PushEvent PushEvent::clone() const noexcept { return *this; }
emlite::Val PushEvent::instance() noexcept { return emlite::Val::global("PushEvent"); }
PushEvent::PushEvent(Handle h) noexcept : ExtendableEvent(emlite::Val::take_ownership(h)) {}
PushEvent::PushEvent(const emlite::Val &val) noexcept: ExtendableEvent(val) {}

PushEvent::PushEvent(const jsbind::String& type) : ExtendableEvent(emlite::Val::global("PushEvent").new_(type)) {}

PushEvent::PushEvent(const jsbind::String& type, const PushEventInit& eventInitDict) : ExtendableEvent(emlite::Val::global("PushEvent").new_(type, eventInitDict)) {}

PushMessageData PushEvent::data() const {
    return ExtendableEvent::get("data").as<PushMessageData>();
}


} // namespace webbind