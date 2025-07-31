#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioScheduledSourceNode.hpp"
#include "enums.hpp"

class AudioParam;


/// The ConstantSourceNode class.
/// [`ConstantSourceNode`](https://developer.mozilla.org/en-US/docs/Web/API/ConstantSourceNode)
class ConstantSourceNode : public AudioScheduledSourceNode {
    explicit ConstantSourceNode(Handle h) noexcept;

public:
    explicit ConstantSourceNode(const emlite::Val &val) noexcept;
    static ConstantSourceNode take_ownership(Handle h) noexcept;

    [[nodiscard]] ConstantSourceNode clone() const noexcept;
    /// The `new ConstantSourceNode(..)` constructor, creating a new ConstantSourceNode instance
    ConstantSourceNode(const BaseAudioContext& context);
    /// The `new ConstantSourceNode(..)` constructor, creating a new ConstantSourceNode instance
    ConstantSourceNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `offset` attribute.
    /// [`ConstantSourceNode.offset`](https://developer.mozilla.org/en-US/docs/Web/API/ConstantSourceNode/offset)
    [[nodiscard]] AudioParam offset() const;
};

