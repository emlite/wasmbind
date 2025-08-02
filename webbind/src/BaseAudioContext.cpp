#include <webbind/BaseAudioContext.hpp>
#include <webbind/AudioDestinationNode.hpp>
#include <webbind/AudioListener.hpp>
#include <webbind/AudioWorklet.hpp>
#include <webbind/AnalyserNode.hpp>
#include <webbind/BiquadFilterNode.hpp>
#include <webbind/AudioBuffer.hpp>
#include <webbind/AudioBufferSourceNode.hpp>
#include <webbind/ChannelMergerNode.hpp>
#include <webbind/ChannelSplitterNode.hpp>
#include <webbind/ConstantSourceNode.hpp>
#include <webbind/ConvolverNode.hpp>
#include <webbind/DelayNode.hpp>
#include <webbind/DynamicsCompressorNode.hpp>
#include <webbind/GainNode.hpp>
#include <webbind/IIRFilterNode.hpp>
#include <webbind/OscillatorNode.hpp>
#include <webbind/PannerNode.hpp>
#include <webbind/PeriodicWave.hpp>
#include <webbind/ScriptProcessorNode.hpp>
#include <webbind/StereoPannerNode.hpp>
#include <webbind/WaveShaperNode.hpp>


PeriodicWaveConstraints::PeriodicWaveConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PeriodicWaveConstraints PeriodicWaveConstraints::take_ownership(Handle h) noexcept {
        return PeriodicWaveConstraints(h);
    }
PeriodicWaveConstraints::PeriodicWaveConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}
PeriodicWaveConstraints::PeriodicWaveConstraints() noexcept: emlite::Val(emlite::Val::object()) {}
PeriodicWaveConstraints PeriodicWaveConstraints::clone() const noexcept { return *this; }

bool PeriodicWaveConstraints::disableNormalization() const {
    return emlite::Val::get("disableNormalization").as<bool>();
}

void PeriodicWaveConstraints::disableNormalization(bool value) {
    emlite::Val::set("disableNormalization", value);
}

BaseAudioContext BaseAudioContext::take_ownership(Handle h) noexcept {
        return BaseAudioContext(h);
    }
BaseAudioContext BaseAudioContext::clone() const noexcept { return *this; }
emlite::Val BaseAudioContext::instance() noexcept { return emlite::Val::global("BaseAudioContext"); }
BaseAudioContext::BaseAudioContext(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BaseAudioContext::BaseAudioContext(const emlite::Val &val) noexcept: EventTarget(val) {}


AudioDestinationNode BaseAudioContext::destination() const {
    return EventTarget::get("destination").as<AudioDestinationNode>();
}

float BaseAudioContext::sampleRate() const {
    return EventTarget::get("sampleRate").as<float>();
}

double BaseAudioContext::currentTime() const {
    return EventTarget::get("currentTime").as<double>();
}

AudioListener BaseAudioContext::listener() const {
    return EventTarget::get("listener").as<AudioListener>();
}

AudioContextState BaseAudioContext::state() const {
    return EventTarget::get("state").as<AudioContextState>();
}

unsigned long BaseAudioContext::renderQuantumSize() const {
    return EventTarget::get("renderQuantumSize").as<unsigned long>();
}

AudioWorklet BaseAudioContext::audioWorklet() const {
    return EventTarget::get("audioWorklet").as<AudioWorklet>();
}

jsbind::Any BaseAudioContext::onstatechange() const {
    return EventTarget::get("onstatechange").as<jsbind::Any>();
}

void BaseAudioContext::onstatechange(const jsbind::Any& value) {
    EventTarget::set("onstatechange", value);
}

AnalyserNode BaseAudioContext::createAnalyser() {
    return EventTarget::call("createAnalyser").as<AnalyserNode>();
}

BiquadFilterNode BaseAudioContext::createBiquadFilter() {
    return EventTarget::call("createBiquadFilter").as<BiquadFilterNode>();
}

AudioBuffer BaseAudioContext::createBuffer(unsigned long numberOfChannels, unsigned long length, float sampleRate) {
    return EventTarget::call("createBuffer", numberOfChannels, length, sampleRate).as<AudioBuffer>();
}

AudioBufferSourceNode BaseAudioContext::createBufferSource() {
    return EventTarget::call("createBufferSource").as<AudioBufferSourceNode>();
}

ChannelMergerNode BaseAudioContext::createChannelMerger() {
    return EventTarget::call("createChannelMerger").as<ChannelMergerNode>();
}

ChannelMergerNode BaseAudioContext::createChannelMerger(unsigned long numberOfInputs) {
    return EventTarget::call("createChannelMerger", numberOfInputs).as<ChannelMergerNode>();
}

ChannelSplitterNode BaseAudioContext::createChannelSplitter() {
    return EventTarget::call("createChannelSplitter").as<ChannelSplitterNode>();
}

ChannelSplitterNode BaseAudioContext::createChannelSplitter(unsigned long numberOfOutputs) {
    return EventTarget::call("createChannelSplitter", numberOfOutputs).as<ChannelSplitterNode>();
}

ConstantSourceNode BaseAudioContext::createConstantSource() {
    return EventTarget::call("createConstantSource").as<ConstantSourceNode>();
}

ConvolverNode BaseAudioContext::createConvolver() {
    return EventTarget::call("createConvolver").as<ConvolverNode>();
}

DelayNode BaseAudioContext::createDelay() {
    return EventTarget::call("createDelay").as<DelayNode>();
}

DelayNode BaseAudioContext::createDelay(double maxDelayTime) {
    return EventTarget::call("createDelay", maxDelayTime).as<DelayNode>();
}

DynamicsCompressorNode BaseAudioContext::createDynamicsCompressor() {
    return EventTarget::call("createDynamicsCompressor").as<DynamicsCompressorNode>();
}

GainNode BaseAudioContext::createGain() {
    return EventTarget::call("createGain").as<GainNode>();
}

IIRFilterNode BaseAudioContext::createIIRFilter(jsbind::TypedArray<double> feedforward, jsbind::TypedArray<double> feedback) {
    return EventTarget::call("createIIRFilter", feedforward, feedback).as<IIRFilterNode>();
}

OscillatorNode BaseAudioContext::createOscillator() {
    return EventTarget::call("createOscillator").as<OscillatorNode>();
}

PannerNode BaseAudioContext::createPanner() {
    return EventTarget::call("createPanner").as<PannerNode>();
}

PeriodicWave BaseAudioContext::createPeriodicWave(jsbind::TypedArray<float> real, jsbind::TypedArray<float> imag) {
    return EventTarget::call("createPeriodicWave", real, imag).as<PeriodicWave>();
}

PeriodicWave BaseAudioContext::createPeriodicWave(jsbind::TypedArray<float> real, jsbind::TypedArray<float> imag, const PeriodicWaveConstraints& constraints) {
    return EventTarget::call("createPeriodicWave", real, imag, constraints).as<PeriodicWave>();
}

ScriptProcessorNode BaseAudioContext::createScriptProcessor() {
    return EventTarget::call("createScriptProcessor").as<ScriptProcessorNode>();
}

ScriptProcessorNode BaseAudioContext::createScriptProcessor(unsigned long bufferSize) {
    return EventTarget::call("createScriptProcessor", bufferSize).as<ScriptProcessorNode>();
}

ScriptProcessorNode BaseAudioContext::createScriptProcessor(unsigned long bufferSize, unsigned long numberOfInputChannels) {
    return EventTarget::call("createScriptProcessor", bufferSize, numberOfInputChannels).as<ScriptProcessorNode>();
}

ScriptProcessorNode BaseAudioContext::createScriptProcessor(unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels) {
    return EventTarget::call("createScriptProcessor", bufferSize, numberOfInputChannels, numberOfOutputChannels).as<ScriptProcessorNode>();
}

StereoPannerNode BaseAudioContext::createStereoPanner() {
    return EventTarget::call("createStereoPanner").as<StereoPannerNode>();
}

WaveShaperNode BaseAudioContext::createWaveShaper() {
    return EventTarget::call("createWaveShaper").as<WaveShaperNode>();
}

jsbind::Promise<AudioBuffer> BaseAudioContext::decodeAudioData(const jsbind::ArrayBuffer& audioData) {
    return EventTarget::call("decodeAudioData", audioData).as<jsbind::Promise<AudioBuffer>>();
}

jsbind::Promise<AudioBuffer> BaseAudioContext::decodeAudioData(const jsbind::ArrayBuffer& audioData, const jsbind::Function& successCallback) {
    return EventTarget::call("decodeAudioData", audioData, successCallback).as<jsbind::Promise<AudioBuffer>>();
}

jsbind::Promise<AudioBuffer> BaseAudioContext::decodeAudioData(const jsbind::ArrayBuffer& audioData, const jsbind::Function& successCallback, const jsbind::Function& errorCallback) {
    return EventTarget::call("decodeAudioData", audioData, successCallback, errorCallback).as<jsbind::Promise<AudioBuffer>>();
}

