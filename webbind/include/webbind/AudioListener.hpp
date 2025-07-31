#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class AudioParam;


/// The AudioListener class.
/// [`AudioListener`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener)
class AudioListener : public emlite::Val {
    explicit AudioListener(Handle h) noexcept;

public:
    explicit AudioListener(const emlite::Val &val) noexcept;
    static AudioListener take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioListener clone() const noexcept;
    /// Getter of the `positionX` attribute.
    /// [`AudioListener.positionX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionX)
    [[nodiscard]] AudioParam positionX() const;
    /// Getter of the `positionY` attribute.
    /// [`AudioListener.positionY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionY)
    [[nodiscard]] AudioParam positionY() const;
    /// Getter of the `positionZ` attribute.
    /// [`AudioListener.positionZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionZ)
    [[nodiscard]] AudioParam positionZ() const;
    /// Getter of the `forwardX` attribute.
    /// [`AudioListener.forwardX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardX)
    [[nodiscard]] AudioParam forwardX() const;
    /// Getter of the `forwardY` attribute.
    /// [`AudioListener.forwardY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardY)
    [[nodiscard]] AudioParam forwardY() const;
    /// Getter of the `forwardZ` attribute.
    /// [`AudioListener.forwardZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardZ)
    [[nodiscard]] AudioParam forwardZ() const;
    /// Getter of the `upX` attribute.
    /// [`AudioListener.upX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upX)
    [[nodiscard]] AudioParam upX() const;
    /// Getter of the `upY` attribute.
    /// [`AudioListener.upY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upY)
    [[nodiscard]] AudioParam upY() const;
    /// Getter of the `upZ` attribute.
    /// [`AudioListener.upZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upZ)
    [[nodiscard]] AudioParam upZ() const;
    /// The setPosition method.
    /// [`AudioListener.setPosition`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/setPosition)
    jsbind::Undefined setPosition(float x, float y, float z);
    /// The setOrientation method.
    /// [`AudioListener.setOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/setOrientation)
    jsbind::Undefined setOrientation(float x, float y, float z, float xUp, float yUp, float zUp);
};

