#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNode.hpp"

namespace webbind {

class BaseAudioContext;
class ConvolverOptions;
class AudioBuffer;

/// Interface ConvolverNode
/// [`ConvolverNode`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode)
class ConvolverNode : public AudioNode {
    explicit ConvolverNode(Handle h) noexcept;
public:
    explicit ConvolverNode(const emlite::Val &val) noexcept;
    static ConvolverNode take_ownership(Handle h) noexcept;
    [[nodiscard]] ConvolverNode clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ConvolverNode(..)` constructor, creating a new ConvolverNode instance
    ConvolverNode(const BaseAudioContext& context);
    /// The `new ConvolverNode(..)` constructor, creating a new ConvolverNode instance
    ConvolverNode(const BaseAudioContext& context, const ConvolverOptions& options);
    /// [`ConvolverNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/buffer)
    /// [`ConvolverNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/buffer)
    [[nodiscard]] AudioBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    /// [`ConvolverNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/buffer)
    void buffer(const AudioBuffer& value);
    /// [`ConvolverNode.normalize`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/normalize)
    /// [`ConvolverNode.normalize`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/normalize)
    [[nodiscard]] bool normalize() const;
    /// Setter of the `normalize` attribute.
    /// [`ConvolverNode.normalize`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/normalize)
    void normalize(bool value);
};

} // namespace webbind