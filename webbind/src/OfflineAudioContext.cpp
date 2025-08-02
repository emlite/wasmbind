#include <webbind/OfflineAudioContext.hpp>
#include <webbind/AudioBuffer.hpp>


OfflineAudioContext OfflineAudioContext::take_ownership(Handle h) noexcept {
        return OfflineAudioContext(h);
    }
OfflineAudioContext OfflineAudioContext::clone() const noexcept { return *this; }
emlite::Val OfflineAudioContext::instance() noexcept { return emlite::Val::global("OfflineAudioContext"); }
OfflineAudioContext::OfflineAudioContext(Handle h) noexcept : BaseAudioContext(emlite::Val::take_ownership(h)) {}
OfflineAudioContext::OfflineAudioContext(const emlite::Val &val) noexcept: BaseAudioContext(val) {}


OfflineAudioContext::OfflineAudioContext(unsigned long numberOfChannels, unsigned long length, float sampleRate) : BaseAudioContext(emlite::Val::global("OfflineAudioContext").new_(numberOfChannels, length, sampleRate)) {}

jsbind::Promise<AudioBuffer> OfflineAudioContext::startRendering() {
    return BaseAudioContext::call("startRendering").as<jsbind::Promise<AudioBuffer>>();
}

jsbind::Promise<jsbind::Undefined> OfflineAudioContext::resume() {
    return BaseAudioContext::call("resume").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> OfflineAudioContext::suspend(double suspendTime) {
    return BaseAudioContext::call("suspend", suspendTime).as<jsbind::Promise<jsbind::Undefined>>();
}

unsigned long OfflineAudioContext::length() const {
    return BaseAudioContext::get("length").as<unsigned long>();
}

jsbind::Any OfflineAudioContext::oncomplete() const {
    return BaseAudioContext::get("oncomplete").as<jsbind::Any>();
}

void OfflineAudioContext::oncomplete(const jsbind::Any& value) {
    BaseAudioContext::set("oncomplete", value);
}

