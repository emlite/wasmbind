#include <webbind/SharedStorageModifierMethod.hpp>


SharedStorageModifierMethod SharedStorageModifierMethod::take_ownership(Handle h) noexcept {
        return SharedStorageModifierMethod(h);
    }
SharedStorageModifierMethod SharedStorageModifierMethod::clone() const noexcept { return *this; }
emlite::Val SharedStorageModifierMethod::instance() noexcept { return emlite::Val::global("SharedStorageModifierMethod"); }
SharedStorageModifierMethod::SharedStorageModifierMethod(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageModifierMethod::SharedStorageModifierMethod(const emlite::Val &val) noexcept: emlite::Val(val) {}


