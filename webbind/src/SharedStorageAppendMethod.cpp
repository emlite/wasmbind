#include <webbind/SharedStorageAppendMethod.hpp>
#include <webbind/SharedStorage.hpp>


SharedStorageAppendMethod SharedStorageAppendMethod::take_ownership(Handle h) noexcept {
        return SharedStorageAppendMethod(h);
    }
SharedStorageAppendMethod SharedStorageAppendMethod::clone() const noexcept { return *this; }
SharedStorageAppendMethod::SharedStorageAppendMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}
SharedStorageAppendMethod::SharedStorageAppendMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}


SharedStorageAppendMethod::SharedStorageAppendMethod(const jsbind::DOMString& key, const jsbind::DOMString& value) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageAppendMethod").new_(key, value)) {}

SharedStorageAppendMethod::SharedStorageAppendMethod(const jsbind::DOMString& key, const jsbind::DOMString& value, const SharedStorageModifierMethodOptions& options) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageAppendMethod").new_(key, value, options)) {}

