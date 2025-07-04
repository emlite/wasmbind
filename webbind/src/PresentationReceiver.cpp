#include <webbind/PresentationReceiver.hpp>
#include <webbind/PresentationConnectionList.hpp>


PresentationReceiver PresentationReceiver::take_ownership(Handle h) noexcept {
        return PresentationReceiver(h);
    }
PresentationReceiver PresentationReceiver::clone() const noexcept { return *this; }
PresentationReceiver::PresentationReceiver(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PresentationReceiver::PresentationReceiver(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise PresentationReceiver::connectionList() const {
    return emlite::Val::get("connectionList").as<jsbind::Promise>();
}

