#include <webbind/XRMesh.hpp>
#include <webbind/XRSpace.hpp>

namespace webbind {

XRMesh XRMesh::take_ownership(Handle h) noexcept {
        return XRMesh(h);
    }
XRMesh XRMesh::clone() const noexcept { return *this; }
emlite::Val XRMesh::instance() noexcept { return emlite::Val::global("XRMesh"); }
XRMesh::XRMesh(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMesh::XRMesh(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRSpace XRMesh::meshSpace() const {
    return emlite::Val::get("meshSpace").as<XRSpace>();
}

jsbind::TypedArray<jsbind::Float32Array> XRMesh::vertices() const {
    return emlite::Val::get("vertices").as<jsbind::TypedArray<jsbind::Float32Array>>();
}

jsbind::Uint32Array XRMesh::indices() const {
    return emlite::Val::get("indices").as<jsbind::Uint32Array>();
}

jsbind::Any XRMesh::lastChangedTime() const {
    return emlite::Val::get("lastChangedTime").as<jsbind::Any>();
}

jsbind::String XRMesh::semanticLabel() const {
    return emlite::Val::get("semanticLabel").as<jsbind::String>();
}


} // namespace webbind