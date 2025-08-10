#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ImageTrack
/// [`ImageTrack`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack)
class ImageTrack : public emlite::Val {
    explicit ImageTrack(Handle h) noexcept;
public:
    explicit ImageTrack(const emlite::Val &val) noexcept;
    static ImageTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `animated` attribute.
    /// [`ImageTrack.animated`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack/animated)
    [[nodiscard]] bool animated() const;
    /// Getter of the `frameCount` attribute.
    /// [`ImageTrack.frameCount`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack/frameCount)
    [[nodiscard]] unsigned long frameCount() const;
    /// Getter of the `repetitionCount` attribute.
    /// [`ImageTrack.repetitionCount`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack/repetitionCount)
    [[nodiscard]] float repetitionCount() const;
    /// Getter of the `selected` attribute.
    /// [`ImageTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack/selected)
    [[nodiscard]] bool selected() const;
    /// Setter of the `selected` attribute.
    /// [`ImageTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrack/selected)
    void selected(bool value);
};

} // namespace webbind