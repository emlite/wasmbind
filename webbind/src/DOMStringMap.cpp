#include <webbind/DOMStringMap.hpp>


DOMStringMap DOMStringMap::take_ownership(Handle h) noexcept {
        return DOMStringMap(h);
    }
DOMStringMap DOMStringMap::clone() const noexcept { return *this; }
DOMStringMap::DOMStringMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMStringMap::DOMStringMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


