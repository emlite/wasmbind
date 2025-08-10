#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"

namespace webbind {

class BaseAudioContext;
class DelayOptions;
class AudioParam;

/// Interface DelayNode
/// [`DelayNode`](https://developer.mozilla.org/en-US/docs/Web/API/DelayNode)
class DelayNode : public AudioNode {
    explicit DelayNode(Handle h) noexcept;
public:
    explicit DelayNode(const emlite::Val &val) noexcept;
    static DelayNode take_ownership(Handle h) noexcept;
    [[nodiscard]] DelayNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DelayNode(..)` constructor, creating a new DelayNode instance
    DelayNode(const BaseAudioContext& context);
    /// The `new DelayNode(..)` constructor, creating a new DelayNode instance
    DelayNode(const BaseAudioContext& context, const DelayOptions& options);
    /// [`DelayNode.delayTime`](https://developer.mozilla.org/en-US/docs/Web/API/DelayNode/delayTime)
    /// [`DelayNode.delayTime`](https://developer.mozilla.org/en-US/docs/Web/API/DelayNode/delayTime)
    [[nodiscard]] AudioParam delayTime() const;
};

} // namespace webbind