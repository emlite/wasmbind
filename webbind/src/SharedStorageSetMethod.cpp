#include <webbind/SharedStorageSetMethod.hpp>
#include <webbind/SharedStorage.hpp>


SharedStorageSetMethod SharedStorageSetMethod::take_ownership(Handle h) noexcept {
        return SharedStorageSetMethod(h);
    }
SharedStorageSetMethod SharedStorageSetMethod::clone() const noexcept { return *this; }
SharedStorageSetMethod::SharedStorageSetMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}
SharedStorageSetMethod::SharedStorageSetMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}


SharedStorageSetMethod::SharedStorageSetMethod(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageSetMethodOptions& options): SharedStorageModifierMethod(emlite::Val::global("SharedStorageSetMethod").new_(key, value, options)) {}

