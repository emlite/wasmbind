#include <webbind/SharedStorageModifierMethod.hpp>


SharedStorageModifierMethod SharedStorageModifierMethod::take_ownership(Handle h) noexcept {
        return SharedStorageModifierMethod(h);
    }
SharedStorageModifierMethod SharedStorageModifierMethod::clone() const noexcept { return *this; }
SharedStorageModifierMethod::SharedStorageModifierMethod(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageModifierMethod::SharedStorageModifierMethod(const emlite::Val &val) noexcept: emlite::Val(val) {}


