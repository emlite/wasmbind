#include <webbind/XRAnchorSet.hpp>

namespace webbind {

XRAnchorSet XRAnchorSet::take_ownership(Handle h) noexcept {
        return XRAnchorSet(h);
    }
XRAnchorSet XRAnchorSet::clone() const noexcept { return *this; }
emlite::Val XRAnchorSet::instance() noexcept { return emlite::Val::global("XRAnchorSet"); }
XRAnchorSet::XRAnchorSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRAnchorSet::XRAnchorSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind