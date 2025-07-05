#include <webbind/SharedStorageDeleteMethod.hpp>
#include <webbind/SharedStorage.hpp>


SharedStorageDeleteMethod SharedStorageDeleteMethod::take_ownership(Handle h) noexcept {
        return SharedStorageDeleteMethod(h);
    }
SharedStorageDeleteMethod SharedStorageDeleteMethod::clone() const noexcept { return *this; }
SharedStorageDeleteMethod::SharedStorageDeleteMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}
SharedStorageDeleteMethod::SharedStorageDeleteMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}


SharedStorageDeleteMethod::SharedStorageDeleteMethod(const jsbind::DOMString& key) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageDeleteMethod").new_(key)) {}

SharedStorageDeleteMethod::SharedStorageDeleteMethod(const jsbind::DOMString& key, const SharedStorageModifierMethodOptions& options) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageDeleteMethod").new_(key, options)) {}

