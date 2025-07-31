#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"


/// The IIRFilterNode class.
/// [`IIRFilterNode`](https://developer.mozilla.org/en-US/docs/Web/API/IIRFilterNode)
class IIRFilterNode : public AudioNode {
    explicit IIRFilterNode(Handle h) noexcept;

public:
    explicit IIRFilterNode(const emlite::Val &val) noexcept;
    static IIRFilterNode take_ownership(Handle h) noexcept;

    [[nodiscard]] IIRFilterNode clone() const noexcept;
    /// The `new IIRFilterNode(..)` constructor, creating a new IIRFilterNode instance
    IIRFilterNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// The getFrequencyResponse method.
    /// [`IIRFilterNode.getFrequencyResponse`](https://developer.mozilla.org/en-US/docs/Web/API/IIRFilterNode/getFrequencyResponse)
    jsbind::Undefined getFrequencyResponse(const jsbind::Float32Array& frequencyHz, const jsbind::Float32Array& magResponse, const jsbind::Float32Array& phaseResponse);
};

