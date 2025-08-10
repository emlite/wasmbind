#include "webbind/KeyboardLayoutMap.hpp"

namespace webbind {

KeyboardLayoutMap KeyboardLayoutMap::take_ownership(Handle h) noexcept {
        return KeyboardLayoutMap(h);
    }
KeyboardLayoutMap KeyboardLayoutMap::clone() const noexcept { return *this; }
emlite::Val KeyboardLayoutMap::instance() noexcept { return emlite::Val::global("KeyboardLayoutMap"); }
KeyboardLayoutMap::KeyboardLayoutMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
KeyboardLayoutMap::KeyboardLayoutMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind