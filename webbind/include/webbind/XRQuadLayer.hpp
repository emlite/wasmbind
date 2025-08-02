#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "XRCompositionLayer.hpp"
#include "enums.hpp"

class XRSpace;
class XRRigidTransform;


/// The XRQuadLayer class.
/// [`XRQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer)
class XRQuadLayer : public XRCompositionLayer {
    explicit XRQuadLayer(Handle h) noexcept;

public:
    explicit XRQuadLayer(const emlite::Val &val) noexcept;
    static XRQuadLayer take_ownership(Handle h) noexcept;

    [[nodiscard]] XRQuadLayer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `space` attribute.
    /// [`XRQuadLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/space)
    [[nodiscard]] XRSpace space() const;
    /// Setter of the `space` attribute.
    /// [`XRQuadLayer.space`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/space)
    void space(const XRSpace& value);
    /// Getter of the `transform` attribute.
    /// [`XRQuadLayer.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/transform)
    [[nodiscard]] XRRigidTransform transform() const;
    /// Setter of the `transform` attribute.
    /// [`XRQuadLayer.transform`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/transform)
    void transform(const XRRigidTransform& value);
    /// Getter of the `width` attribute.
    /// [`XRQuadLayer.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/width)
    [[nodiscard]] float width() const;
    /// Setter of the `width` attribute.
    /// [`XRQuadLayer.width`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/width)
    void width(float value);
    /// Getter of the `height` attribute.
    /// [`XRQuadLayer.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/height)
    [[nodiscard]] float height() const;
    /// Setter of the `height` attribute.
    /// [`XRQuadLayer.height`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/height)
    void height(float value);
    /// Getter of the `onredraw` attribute.
    /// [`XRQuadLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/onredraw)
    [[nodiscard]] jsbind::Any onredraw() const;
    /// Setter of the `onredraw` attribute.
    /// [`XRQuadLayer.onredraw`](https://developer.mozilla.org/en-US/docs/Web/API/XRQuadLayer/onredraw)
    void onredraw(const jsbind::Any& value);
};

