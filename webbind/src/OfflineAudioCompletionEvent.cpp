#include <webbind/OfflineAudioCompletionEvent.hpp>
#include <webbind/AudioBuffer.hpp>


OfflineAudioCompletionEvent OfflineAudioCompletionEvent::take_ownership(Handle h) noexcept {
        return OfflineAudioCompletionEvent(h);
    }
OfflineAudioCompletionEvent OfflineAudioCompletionEvent::clone() const noexcept { return *this; }
OfflineAudioCompletionEvent::OfflineAudioCompletionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
OfflineAudioCompletionEvent::OfflineAudioCompletionEvent(const emlite::Val &val) noexcept: Event(val) {}


OfflineAudioCompletionEvent::OfflineAudioCompletionEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("OfflineAudioCompletionEvent").new_(type, eventInitDict)) {}

AudioBuffer OfflineAudioCompletionEvent::renderedBuffer() const {
    return Event::get("renderedBuffer").as<AudioBuffer>();
}

