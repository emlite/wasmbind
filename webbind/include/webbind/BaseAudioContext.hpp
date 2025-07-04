#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AudioDestinationNode;
class AudioListener;
class AudioWorklet;
class AnalyserNode;
class BiquadFilterNode;
class AudioBuffer;
class AudioBufferSourceNode;
class ChannelMergerNode;
class ChannelSplitterNode;
class ConstantSourceNode;
class ConvolverNode;
class DelayNode;
class DynamicsCompressorNode;
class GainNode;
class IIRFilterNode;
class OscillatorNode;
class PannerNode;
class PeriodicWave;
class PeriodicWaveConstraints;
class ScriptProcessorNode;
class StereoPannerNode;
class WaveShaperNode;


class PeriodicWaveConstraints : public emlite::Val {
  explicit PeriodicWaveConstraints(Handle h) noexcept;
public:
    static PeriodicWaveConstraints take_ownership(Handle h) noexcept;
    explicit PeriodicWaveConstraints(const emlite::Val &val) noexcept;
    PeriodicWaveConstraints() noexcept;
    PeriodicWaveConstraints clone() const noexcept;
    bool disableNormalization() const;
    void disableNormalization(bool value);
};

class BaseAudioContext : public EventTarget {
    explicit BaseAudioContext(Handle h) noexcept;

public:
    explicit BaseAudioContext(const emlite::Val &val) noexcept;
    static BaseAudioContext take_ownership(Handle h) noexcept;

    BaseAudioContext clone() const noexcept;
    AudioDestinationNode destination() const;
    float sampleRate() const;
    double currentTime() const;
    AudioListener listener() const;
    AudioContextState state() const;
    unsigned long renderQuantumSize() const;
    AudioWorklet audioWorklet() const;
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    AnalyserNode createAnalyser();
    BiquadFilterNode createBiquadFilter();
    AudioBuffer createBuffer(unsigned long numberOfChannels, unsigned long length, float sampleRate);
    AudioBufferSourceNode createBufferSource();
    ChannelMergerNode createChannelMerger(unsigned long numberOfInputs);
    ChannelSplitterNode createChannelSplitter(unsigned long numberOfOutputs);
    ConstantSourceNode createConstantSource();
    ConvolverNode createConvolver();
    DelayNode createDelay(double maxDelayTime);
    DynamicsCompressorNode createDynamicsCompressor();
    GainNode createGain();
    IIRFilterNode createIIRFilter(jsbind::Sequence<double> feedforward, jsbind::Sequence<double> feedback);
    OscillatorNode createOscillator();
    PannerNode createPanner();
    PeriodicWave createPeriodicWave(jsbind::Sequence<float> real, jsbind::Sequence<float> imag, const PeriodicWaveConstraints& constraints);
    ScriptProcessorNode createScriptProcessor(unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels);
    StereoPannerNode createStereoPanner();
    WaveShaperNode createWaveShaper();
    jsbind::Promise decodeAudioData(const jsbind::ArrayBuffer& audioData, const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

