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
    [[nodiscard]] PeriodicWaveConstraints clone() const noexcept;
    [[nodiscard]] bool disableNormalization() const;
    void disableNormalization(bool value);
};

/// The BaseAudioContext class.
/// [`BaseAudioContext`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext)
class BaseAudioContext : public EventTarget {
    explicit BaseAudioContext(Handle h) noexcept;

public:
    explicit BaseAudioContext(const emlite::Val &val) noexcept;
    static BaseAudioContext take_ownership(Handle h) noexcept;

    [[nodiscard]] BaseAudioContext clone() const noexcept;
    /// Getter of the `destination` attribute.
    /// [`BaseAudioContext.destination`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/destination)
    [[nodiscard]] AudioDestinationNode destination() const;
    /// Getter of the `sampleRate` attribute.
    /// [`BaseAudioContext.sampleRate`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/sampleRate)
    [[nodiscard]] float sampleRate() const;
    /// Getter of the `currentTime` attribute.
    /// [`BaseAudioContext.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/currentTime)
    [[nodiscard]] double currentTime() const;
    /// Getter of the `listener` attribute.
    /// [`BaseAudioContext.listener`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/listener)
    [[nodiscard]] AudioListener listener() const;
    /// Getter of the `state` attribute.
    /// [`BaseAudioContext.state`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/state)
    [[nodiscard]] AudioContextState state() const;
    /// Getter of the `renderQuantumSize` attribute.
    /// [`BaseAudioContext.renderQuantumSize`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/renderQuantumSize)
    [[nodiscard]] unsigned long renderQuantumSize() const;
    /// Getter of the `audioWorklet` attribute.
    /// [`BaseAudioContext.audioWorklet`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/audioWorklet)
    [[nodiscard]] AudioWorklet audioWorklet() const;
    /// Getter of the `onstatechange` attribute.
    /// [`BaseAudioContext.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`BaseAudioContext.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// The createAnalyser method.
    /// [`BaseAudioContext.createAnalyser`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createAnalyser)
    AnalyserNode createAnalyser();
    /// The createBiquadFilter method.
    /// [`BaseAudioContext.createBiquadFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createBiquadFilter)
    BiquadFilterNode createBiquadFilter();
    /// The createBuffer method.
    /// [`BaseAudioContext.createBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createBuffer)
    AudioBuffer createBuffer(unsigned long numberOfChannels, unsigned long length, float sampleRate);
    /// The createBufferSource method.
    /// [`BaseAudioContext.createBufferSource`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createBufferSource)
    AudioBufferSourceNode createBufferSource();
    /// The createChannelMerger method.
    /// [`BaseAudioContext.createChannelMerger`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createChannelMerger)
    ChannelMergerNode createChannelMerger();
    /// The createChannelMerger method.
    /// [`BaseAudioContext.createChannelMerger`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createChannelMerger)
    ChannelMergerNode createChannelMerger(unsigned long numberOfInputs);
    /// The createChannelSplitter method.
    /// [`BaseAudioContext.createChannelSplitter`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createChannelSplitter)
    ChannelSplitterNode createChannelSplitter();
    /// The createChannelSplitter method.
    /// [`BaseAudioContext.createChannelSplitter`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createChannelSplitter)
    ChannelSplitterNode createChannelSplitter(unsigned long numberOfOutputs);
    /// The createConstantSource method.
    /// [`BaseAudioContext.createConstantSource`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createConstantSource)
    ConstantSourceNode createConstantSource();
    /// The createConvolver method.
    /// [`BaseAudioContext.createConvolver`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createConvolver)
    ConvolverNode createConvolver();
    /// The createDelay method.
    /// [`BaseAudioContext.createDelay`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createDelay)
    DelayNode createDelay();
    /// The createDelay method.
    /// [`BaseAudioContext.createDelay`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createDelay)
    DelayNode createDelay(double maxDelayTime);
    /// The createDynamicsCompressor method.
    /// [`BaseAudioContext.createDynamicsCompressor`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createDynamicsCompressor)
    DynamicsCompressorNode createDynamicsCompressor();
    /// The createGain method.
    /// [`BaseAudioContext.createGain`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createGain)
    GainNode createGain();
    /// The createIIRFilter method.
    /// [`BaseAudioContext.createIIRFilter`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createIIRFilter)
    IIRFilterNode createIIRFilter(jsbind::TypedArray<double> feedforward, jsbind::TypedArray<double> feedback);
    /// The createOscillator method.
    /// [`BaseAudioContext.createOscillator`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createOscillator)
    OscillatorNode createOscillator();
    /// The createPanner method.
    /// [`BaseAudioContext.createPanner`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createPanner)
    PannerNode createPanner();
    /// The createPeriodicWave method.
    /// [`BaseAudioContext.createPeriodicWave`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createPeriodicWave)
    PeriodicWave createPeriodicWave(jsbind::TypedArray<float> real, jsbind::TypedArray<float> imag);
    /// The createPeriodicWave method.
    /// [`BaseAudioContext.createPeriodicWave`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createPeriodicWave)
    PeriodicWave createPeriodicWave(jsbind::TypedArray<float> real, jsbind::TypedArray<float> imag, const PeriodicWaveConstraints& constraints);
    /// The createScriptProcessor method.
    /// [`BaseAudioContext.createScriptProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createScriptProcessor)
    ScriptProcessorNode createScriptProcessor();
    /// The createScriptProcessor method.
    /// [`BaseAudioContext.createScriptProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createScriptProcessor)
    ScriptProcessorNode createScriptProcessor(unsigned long bufferSize);
    /// The createScriptProcessor method.
    /// [`BaseAudioContext.createScriptProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createScriptProcessor)
    ScriptProcessorNode createScriptProcessor(unsigned long bufferSize, unsigned long numberOfInputChannels);
    /// The createScriptProcessor method.
    /// [`BaseAudioContext.createScriptProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createScriptProcessor)
    ScriptProcessorNode createScriptProcessor(unsigned long bufferSize, unsigned long numberOfInputChannels, unsigned long numberOfOutputChannels);
    /// The createStereoPanner method.
    /// [`BaseAudioContext.createStereoPanner`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createStereoPanner)
    StereoPannerNode createStereoPanner();
    /// The createWaveShaper method.
    /// [`BaseAudioContext.createWaveShaper`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/createWaveShaper)
    WaveShaperNode createWaveShaper();
    /// The decodeAudioData method.
    /// [`BaseAudioContext.decodeAudioData`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/decodeAudioData)
    jsbind::Promise<AudioBuffer> decodeAudioData(const jsbind::ArrayBuffer& audioData);
    /// The decodeAudioData method.
    /// [`BaseAudioContext.decodeAudioData`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/decodeAudioData)
    jsbind::Promise<AudioBuffer> decodeAudioData(const jsbind::ArrayBuffer& audioData, const jsbind::Function& successCallback);
    /// The decodeAudioData method.
    /// [`BaseAudioContext.decodeAudioData`](https://developer.mozilla.org/en-US/docs/Web/API/BaseAudioContext/decodeAudioData)
    jsbind::Promise<AudioBuffer> decodeAudioData(const jsbind::ArrayBuffer& audioData, const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

