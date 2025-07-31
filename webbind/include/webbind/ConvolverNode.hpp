#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AudioNode.hpp"
#include "enums.hpp"

class AudioBuffer;


/// The ConvolverNode class.
/// [`ConvolverNode`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode)
class ConvolverNode : public AudioNode {
    explicit ConvolverNode(Handle h) noexcept;

public:
    explicit ConvolverNode(const emlite::Val &val) noexcept;
    static ConvolverNode take_ownership(Handle h) noexcept;

    [[nodiscard]] ConvolverNode clone() const noexcept;
    /// The `new ConvolverNode(..)` constructor, creating a new ConvolverNode instance
    ConvolverNode(const BaseAudioContext& context);
    /// The `new ConvolverNode(..)` constructor, creating a new ConvolverNode instance
    ConvolverNode(const BaseAudioContext& context, const jsbind::Any& options);
    /// Getter of the `buffer` attribute.
    /// [`ConvolverNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/buffer)
    [[nodiscard]] AudioBuffer buffer() const;
    /// Setter of the `buffer` attribute.
    /// [`ConvolverNode.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/buffer)
    void buffer(const AudioBuffer& value);
    /// Getter of the `normalize` attribute.
    /// [`ConvolverNode.normalize`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/normalize)
    [[nodiscard]] bool normalize() const;
    /// Setter of the `normalize` attribute.
    /// [`ConvolverNode.normalize`](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode/normalize)
    void normalize(bool value);
};

