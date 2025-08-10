#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XRMediaQuadLayerInit.hpp"
#include "XRMediaCylinderLayerInit.hpp"
#include "XRMediaEquirectLayerInit.hpp"

namespace webbind {

class XRSession;
class XRQuadLayer;
class HTMLVideoElement;
class XRCylinderLayer;
class XREquirectLayer;

/// Interface XRMediaBinding
/// [`XRMediaBinding`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding)
class XRMediaBinding : public emlite::Val {
    explicit XRMediaBinding(Handle h) noexcept;
public:
    explicit XRMediaBinding(const emlite::Val &val) noexcept;
    static XRMediaBinding take_ownership(Handle h) noexcept;
    [[nodiscard]] XRMediaBinding clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRMediaBinding(..)` constructor, creating a new XRMediaBinding instance
    XRMediaBinding(const XRSession& session);
    /// The createQuadLayer method.
    /// [`XRMediaBinding.createQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createQuadLayer)
    XRQuadLayer createQuadLayer(const HTMLVideoElement& video);
    /// The createQuadLayer method.
    /// [`XRMediaBinding.createQuadLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createQuadLayer)
    XRQuadLayer createQuadLayer(const HTMLVideoElement& video, const XRMediaQuadLayerInit& init);
    /// The createCylinderLayer method.
    /// [`XRMediaBinding.createCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createCylinderLayer)
    XRCylinderLayer createCylinderLayer(const HTMLVideoElement& video);
    /// The createCylinderLayer method.
    /// [`XRMediaBinding.createCylinderLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createCylinderLayer)
    XRCylinderLayer createCylinderLayer(const HTMLVideoElement& video, const XRMediaCylinderLayerInit& init);
    /// The createEquirectLayer method.
    /// [`XRMediaBinding.createEquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createEquirectLayer)
    XREquirectLayer createEquirectLayer(const HTMLVideoElement& video);
    /// The createEquirectLayer method.
    /// [`XRMediaBinding.createEquirectLayer`](https://developer.mozilla.org/en-US/docs/Web/API/XRMediaBinding/createEquirectLayer)
    XREquirectLayer createEquirectLayer(const HTMLVideoElement& video, const XRMediaEquirectLayerInit& init);
};

} // namespace webbind