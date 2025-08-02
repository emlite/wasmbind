#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioParam;


/// The GainNode class.
/// [`GainNode`](https://developer.mozilla.org/en-US/docs/Web/API/GainNode)
class GainNode : public AudioNode {
    explicit GainNode(Handle h) noexcept;

public:
    explicit GainNode(const emlite::Val &val) noexcept;
    static GainNode take_ownership(Handle h) noexcept;

    [[nodiscard]] GainNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new GainNode(..)` constructor, creating a new GainNode instance
    GainNode(const BaseAudioContext& context);
    /// The `new GainNode(..)` constructor, creating a new GainNode instance
    GainNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `gain` attribute.
    /// [`GainNode.gain`](https://developer.mozilla.org/en-US/docs/Web/API/GainNode/gain)
    [[nodiscard]] AudioParam gain() const;
};

