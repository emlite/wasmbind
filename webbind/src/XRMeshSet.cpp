#include <webbind/XRMeshSet.hpp>


XRMeshSet XRMeshSet::take_ownership(Handle h) noexcept {
        return XRMeshSet(h);
    }
XRMeshSet XRMeshSet::clone() const noexcept { return *this; }
emlite::Val XRMeshSet::instance() noexcept { return emlite::Val::global("XRMeshSet"); }
XRMeshSet::XRMeshSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMeshSet::XRMeshSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


