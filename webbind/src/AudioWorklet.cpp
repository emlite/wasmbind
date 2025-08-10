#include <webbind/AudioWorklet.hpp>
#include <webbind/MessagePort.hpp>

namespace webbind {

AudioWorklet AudioWorklet::take_ownership(Handle h) noexcept {
        return AudioWorklet(h);
    }
AudioWorklet AudioWorklet::clone() const noexcept { return *this; }
emlite::Val AudioWorklet::instance() noexcept { return emlite::Val::global("AudioWorklet"); }
AudioWorklet::AudioWorklet(Handle h) noexcept : Worklet(emlite::Val::take_ownership(h)) {}
AudioWorklet::AudioWorklet(const emlite::Val &val) noexcept: Worklet(val) {}

MessagePort AudioWorklet::port() const {
    return Worklet::get("port").as<MessagePort>();
}


} // namespace webbind