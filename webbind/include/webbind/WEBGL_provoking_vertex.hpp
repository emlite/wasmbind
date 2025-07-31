#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_provoking_vertex class.
/// [`WEBGL_provoking_vertex`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_provoking_vertex)
class WEBGL_provoking_vertex : public emlite::Val {
    explicit WEBGL_provoking_vertex(Handle h) noexcept;

public:
    explicit WEBGL_provoking_vertex(const emlite::Val &val) noexcept;
    static WEBGL_provoking_vertex take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_provoking_vertex clone() const noexcept;
    /// The provokingVertexWEBGL method.
    /// [`WEBGL_provoking_vertex.provokingVertexWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_provoking_vertex/provokingVertexWEBGL)
    jsbind::Undefined provokingVertexWEBGL(const jsbind::Any& provokeMode);
};

