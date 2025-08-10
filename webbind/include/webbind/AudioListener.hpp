#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AudioParam;

/// Interface AudioListener
/// [`AudioListener`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener)
class AudioListener : public emlite::Val {
    explicit AudioListener(Handle h) noexcept;
public:
    explicit AudioListener(const emlite::Val &val) noexcept;
    static AudioListener take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioListener clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`AudioListener.positionX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionX)
    /// [`AudioListener.positionX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionX)
    [[nodiscard]] AudioParam positionX() const;
    /// [`AudioListener.positionY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionY)
    /// [`AudioListener.positionY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionY)
    [[nodiscard]] AudioParam positionY() const;
    /// [`AudioListener.positionZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionZ)
    /// [`AudioListener.positionZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/positionZ)
    [[nodiscard]] AudioParam positionZ() const;
    /// [`AudioListener.forwardX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardX)
    /// [`AudioListener.forwardX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardX)
    [[nodiscard]] AudioParam forwardX() const;
    /// [`AudioListener.forwardY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardY)
    /// [`AudioListener.forwardY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardY)
    [[nodiscard]] AudioParam forwardY() const;
    /// [`AudioListener.forwardZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardZ)
    /// [`AudioListener.forwardZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/forwardZ)
    [[nodiscard]] AudioParam forwardZ() const;
    /// [`AudioListener.upX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upX)
    /// [`AudioListener.upX`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upX)
    [[nodiscard]] AudioParam upX() const;
    /// [`AudioListener.upY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upY)
    /// [`AudioListener.upY`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upY)
    [[nodiscard]] AudioParam upY() const;
    /// [`AudioListener.upZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upZ)
    /// [`AudioListener.upZ`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/upZ)
    [[nodiscard]] AudioParam upZ() const;
    /// The setPosition method.
    /// [`AudioListener.setPosition`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/setPosition)
    jsbind::Undefined setPosition(float x, float y, float z);
    /// The setOrientation method.
    /// [`AudioListener.setOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/AudioListener/setOrientation)
    jsbind::Undefined setOrientation(float x, float y, float z, float xUp, float yUp, float zUp);
};

} // namespace webbind