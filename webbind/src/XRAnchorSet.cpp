#include <webbind/XRAnchorSet.hpp>


XRAnchorSet XRAnchorSet::take_ownership(Handle h) noexcept {
        return XRAnchorSet(h);
    }
XRAnchorSet XRAnchorSet::clone() const noexcept { return *this; }
XRAnchorSet::XRAnchorSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRAnchorSet::XRAnchorSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


