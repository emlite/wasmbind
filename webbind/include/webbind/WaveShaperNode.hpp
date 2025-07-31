#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The WaveShaperNode class.
/// [`WaveShaperNode`](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperNode)
class WaveShaperNode : public AudioNode {
    explicit WaveShaperNode(Handle h) noexcept;

public:
    explicit WaveShaperNode(const emlite::Val &val) noexcept;
    static WaveShaperNode take_ownership(Handle h) noexcept;

    [[nodiscard]] WaveShaperNode clone() const noexcept;
    /// The `new WaveShaperNode(..)` constructor, creating a new WaveShaperNode instance
    WaveShaperNode(const BaseAudioContext& context);
    /// The `new WaveShaperNode(..)` constructor, creating a new WaveShaperNode instance
    WaveShaperNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `curve` attribute.
    /// [`WaveShaperNode.curve`](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperNode/curve)
    [[nodiscard]] jsbind::Float32Array curve() const;
    /// Setter of the `curve` attribute.
    /// [`WaveShaperNode.curve`](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperNode/curve)
    void curve(const jsbind::Float32Array& value);
    /// Getter of the `oversample` attribute.
    /// [`WaveShaperNode.oversample`](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperNode/oversample)
    [[nodiscard]] OverSampleType oversample() const;
    /// Setter of the `oversample` attribute.
    /// [`WaveShaperNode.oversample`](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperNode/oversample)
    void oversample(const OverSampleType& value);
};

