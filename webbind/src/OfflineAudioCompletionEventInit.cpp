#include "webbind/OfflineAudioCompletionEventInit.hpp"
#include "webbind/AudioBuffer.hpp"

using emlite::Val;
namespace webbind {

OfflineAudioCompletionEventInit::OfflineAudioCompletionEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
OfflineAudioCompletionEventInit OfflineAudioCompletionEventInit::take_ownership(Handle h) noexcept {
        return OfflineAudioCompletionEventInit(h);
    }
OfflineAudioCompletionEventInit::OfflineAudioCompletionEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
OfflineAudioCompletionEventInit::OfflineAudioCompletionEventInit() noexcept: EventInit(emlite::Val::object()) {}
OfflineAudioCompletionEventInit OfflineAudioCompletionEventInit::clone() const noexcept { return *this; }

AudioBuffer OfflineAudioCompletionEventInit::renderedBuffer() const {
    return emlite::Val::get("renderedBuffer").as<AudioBuffer>();
}

void OfflineAudioCompletionEventInit::renderedBuffer(const AudioBuffer& value) {
    emlite::Val::set("renderedBuffer", value);
}


} // namespace webbind