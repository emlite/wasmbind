#include <webbind/AudioWorkletGlobalScope.hpp>
#include <webbind/MessagePort.hpp>


AudioWorkletGlobalScope AudioWorkletGlobalScope::take_ownership(Handle h) noexcept {
        return AudioWorkletGlobalScope(h);
    }
AudioWorkletGlobalScope AudioWorkletGlobalScope::clone() const noexcept { return *this; }
AudioWorkletGlobalScope::AudioWorkletGlobalScope(Handle h) noexcept : WorkletGlobalScope(emlite::Val::take_ownership(h)) {}
AudioWorkletGlobalScope::AudioWorkletGlobalScope(const emlite::Val &val) noexcept: WorkletGlobalScope(val) {}


jsbind::Undefined AudioWorkletGlobalScope::registerProcessor(const jsbind::String& name, const jsbind::Function& processorCtor) {
    return WorkletGlobalScope::call("registerProcessor", name, processorCtor).as<jsbind::Undefined>();
}

long long AudioWorkletGlobalScope::currentFrame() const {
    return WorkletGlobalScope::get("currentFrame").as<long long>();
}

double AudioWorkletGlobalScope::currentTime() const {
    return WorkletGlobalScope::get("currentTime").as<double>();
}

float AudioWorkletGlobalScope::sampleRate() const {
    return WorkletGlobalScope::get("sampleRate").as<float>();
}

unsigned long AudioWorkletGlobalScope::renderQuantumSize() const {
    return WorkletGlobalScope::get("renderQuantumSize").as<unsigned long>();
}

jsbind::Any AudioWorkletGlobalScope::port() const {
    return WorkletGlobalScope::get("port").as<jsbind::Any>();
}

