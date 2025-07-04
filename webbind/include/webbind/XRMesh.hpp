#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRSpace;


class XRMesh : public emlite::Val {
    explicit XRMesh(Handle h) noexcept;

public:
    explicit XRMesh(const emlite::Val &val) noexcept;
    static XRMesh take_ownership(Handle h) noexcept;

    XRMesh clone() const noexcept;
    XRSpace meshSpace() const;
    jsbind::FrozenArray<jsbind::Float32Array> vertices() const;
    jsbind::Uint32Array indices() const;
    jsbind::Any lastChangedTime() const;
    jsbind::DOMString semanticLabel() const;
};

