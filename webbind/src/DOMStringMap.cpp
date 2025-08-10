#include "webbind/DOMStringMap.hpp"

namespace webbind {

DOMStringMap DOMStringMap::take_ownership(Handle h) noexcept {
        return DOMStringMap(h);
    }
DOMStringMap DOMStringMap::clone() const noexcept { return *this; }
emlite::Val DOMStringMap::instance() noexcept { return emlite::Val::global("DOMStringMap"); }
DOMStringMap::DOMStringMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMStringMap::DOMStringMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind