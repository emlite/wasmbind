#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRSpace;

/// Interface XRMesh
/// [`XRMesh`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh)
class XRMesh : public emlite::Val {
    explicit XRMesh(Handle h) noexcept;
public:
    explicit XRMesh(const emlite::Val &val) noexcept;
    static XRMesh take_ownership(Handle h) noexcept;
    [[nodiscard]] XRMesh clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`XRMesh.meshSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/meshSpace)
    /// [`XRMesh.meshSpace`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/meshSpace)
    [[nodiscard]] XRSpace meshSpace() const;
    /// [`XRMesh.vertices`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/vertices)
    /// [`XRMesh.vertices`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/vertices)
    [[nodiscard]] jsbind::TypedArray<jsbind::Float32Array> vertices() const;
    /// [`XRMesh.indices`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/indices)
    /// [`XRMesh.indices`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/indices)
    [[nodiscard]] jsbind::Uint32Array indices() const;
    /// [`XRMesh.lastChangedTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/lastChangedTime)
    /// [`XRMesh.lastChangedTime`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/lastChangedTime)
    [[nodiscard]] jsbind::Any lastChangedTime() const;
    /// [`XRMesh.semanticLabel`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/semanticLabel)
    /// [`XRMesh.semanticLabel`](https://developer.mozilla.org/en-US/docs/Web/API/XRMesh/semanticLabel)
    [[nodiscard]] jsbind::String semanticLabel() const;
};

} // namespace webbind