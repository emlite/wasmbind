#include <webbind/AudioWorklet.hpp>
#include <webbind/MessagePort.hpp>


AudioWorklet AudioWorklet::take_ownership(Handle h) noexcept {
        return AudioWorklet(h);
    }
AudioWorklet AudioWorklet::clone() const noexcept { return *this; }
AudioWorklet::AudioWorklet(Handle h) noexcept : Worklet(emlite::Val::take_ownership(h)) {}
AudioWorklet::AudioWorklet(const emlite::Val &val) noexcept: Worklet(val) {}


jsbind::Any AudioWorklet::port() const {
    return Worklet::get("port").as<jsbind::Any>();
}

