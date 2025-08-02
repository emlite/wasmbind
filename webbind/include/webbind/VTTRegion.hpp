#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The VTTRegion class.
/// [`VTTRegion`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion)
class VTTRegion : public emlite::Val {
    explicit VTTRegion(Handle h) noexcept;

public:
    explicit VTTRegion(const emlite::Val &val) noexcept;
    static VTTRegion take_ownership(Handle h) noexcept;

    [[nodiscard]] VTTRegion clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VTTRegion(..)` constructor, creating a new VTTRegion instance
    VTTRegion();
    /// Getter of the `id` attribute.
    /// [`VTTRegion.id`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/id)
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    /// [`VTTRegion.id`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/id)
    void id(const jsbind::String& value);
    /// Getter of the `width` attribute.
    /// [`VTTRegion.width`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/width)
    [[nodiscard]] double width() const;
    /// Setter of the `width` attribute.
    /// [`VTTRegion.width`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/width)
    void width(double value);
    /// Getter of the `lines` attribute.
    /// [`VTTRegion.lines`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/lines)
    [[nodiscard]] unsigned long lines() const;
    /// Setter of the `lines` attribute.
    /// [`VTTRegion.lines`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/lines)
    void lines(unsigned long value);
    /// Getter of the `regionAnchorX` attribute.
    /// [`VTTRegion.regionAnchorX`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/regionAnchorX)
    [[nodiscard]] double regionAnchorX() const;
    /// Setter of the `regionAnchorX` attribute.
    /// [`VTTRegion.regionAnchorX`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/regionAnchorX)
    void regionAnchorX(double value);
    /// Getter of the `regionAnchorY` attribute.
    /// [`VTTRegion.regionAnchorY`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/regionAnchorY)
    [[nodiscard]] double regionAnchorY() const;
    /// Setter of the `regionAnchorY` attribute.
    /// [`VTTRegion.regionAnchorY`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/regionAnchorY)
    void regionAnchorY(double value);
    /// Getter of the `viewportAnchorX` attribute.
    /// [`VTTRegion.viewportAnchorX`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/viewportAnchorX)
    [[nodiscard]] double viewportAnchorX() const;
    /// Setter of the `viewportAnchorX` attribute.
    /// [`VTTRegion.viewportAnchorX`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/viewportAnchorX)
    void viewportAnchorX(double value);
    /// Getter of the `viewportAnchorY` attribute.
    /// [`VTTRegion.viewportAnchorY`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/viewportAnchorY)
    [[nodiscard]] double viewportAnchorY() const;
    /// Setter of the `viewportAnchorY` attribute.
    /// [`VTTRegion.viewportAnchorY`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/viewportAnchorY)
    void viewportAnchorY(double value);
    /// Getter of the `scroll` attribute.
    /// [`VTTRegion.scroll`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/scroll)
    [[nodiscard]] ScrollSetting scroll() const;
    /// Setter of the `scroll` attribute.
    /// [`VTTRegion.scroll`](https://developer.mozilla.org/en-US/docs/Web/API/VTTRegion/scroll)
    void scroll(const ScrollSetting& value);
};

