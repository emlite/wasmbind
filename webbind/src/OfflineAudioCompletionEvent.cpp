#include "webbind/OfflineAudioCompletionEvent.hpp"
#include "webbind/OfflineAudioCompletionEventInit.hpp"
#include "webbind/AudioBuffer.hpp"

namespace webbind {

OfflineAudioCompletionEvent OfflineAudioCompletionEvent::take_ownership(Handle h) noexcept {
        return OfflineAudioCompletionEvent(h);
    }
OfflineAudioCompletionEvent OfflineAudioCompletionEvent::clone() const noexcept { return *this; }
emlite::Val OfflineAudioCompletionEvent::instance() noexcept { return emlite::Val::global("OfflineAudioCompletionEvent"); }
OfflineAudioCompletionEvent::OfflineAudioCompletionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
OfflineAudioCompletionEvent::OfflineAudioCompletionEvent(const emlite::Val &val) noexcept: Event(val) {}

OfflineAudioCompletionEvent::OfflineAudioCompletionEvent(const jsbind::String& type, const OfflineAudioCompletionEventInit& eventInitDict) : Event(emlite::Val::global("OfflineAudioCompletionEvent").new_(type, eventInitDict)) {}

AudioBuffer OfflineAudioCompletionEvent::renderedBuffer() const {
    return Event::get("renderedBuffer").as<AudioBuffer>();
}


} // namespace webbind