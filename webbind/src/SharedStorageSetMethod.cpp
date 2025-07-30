#include <webbind/SharedStorageSetMethod.hpp>
#include <webbind/SharedStorage.hpp>


SharedStorageSetMethod SharedStorageSetMethod::take_ownership(Handle h) noexcept {
        return SharedStorageSetMethod(h);
    }
SharedStorageSetMethod SharedStorageSetMethod::clone() const noexcept { return *this; }
SharedStorageSetMethod::SharedStorageSetMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}
SharedStorageSetMethod::SharedStorageSetMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}


SharedStorageSetMethod::SharedStorageSetMethod(const jsbind::String& key, const jsbind::String& value) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageSetMethod").new_(key, value)) {}

SharedStorageSetMethod::SharedStorageSetMethod(const jsbind::String& key, const jsbind::String& value, const SharedStorageSetMethodOptions& options) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageSetMethod").new_(key, value, options)) {}

