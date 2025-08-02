#include <webbind/AudioWorkletProcessor.hpp>
#include <webbind/MessagePort.hpp>


AudioWorkletProcessor AudioWorkletProcessor::take_ownership(Handle h) noexcept {
        return AudioWorkletProcessor(h);
    }
AudioWorkletProcessor AudioWorkletProcessor::clone() const noexcept { return *this; }
emlite::Val AudioWorkletProcessor::instance() noexcept { return emlite::Val::global("AudioWorkletProcessor"); }
AudioWorkletProcessor::AudioWorkletProcessor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AudioWorkletProcessor::AudioWorkletProcessor(const emlite::Val &val) noexcept: emlite::Val(val) {}


AudioWorkletProcessor::AudioWorkletProcessor() : emlite::Val(emlite::Val::global("AudioWorkletProcessor").new_()) {}

jsbind::Any AudioWorkletProcessor::port() const {
    return emlite::Val::get("port").as<jsbind::Any>();
}

