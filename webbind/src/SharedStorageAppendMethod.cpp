#include <webbind/SharedStorageAppendMethod.hpp>
#include <webbind/SharedStorageModifierMethodOptions.hpp>

namespace webbind {

SharedStorageAppendMethod SharedStorageAppendMethod::take_ownership(Handle h) noexcept {
    return SharedStorageAppendMethod(h);
}

SharedStorageAppendMethod SharedStorageAppendMethod::clone() const noexcept { return *this; }

emlite::Val SharedStorageAppendMethod::instance() noexcept { return emlite::Val::global("SharedStorageAppendMethod"); }

SharedStorageAppendMethod::SharedStorageAppendMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}

SharedStorageAppendMethod::SharedStorageAppendMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}

SharedStorageAppendMethod::SharedStorageAppendMethod(const jsbind::String& key, const jsbind::String& value) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageAppendMethod").new_(key, value)) {}

SharedStorageAppendMethod::SharedStorageAppendMethod(const jsbind::String& key, const jsbind::String& value, const SharedStorageModifierMethodOptions& options) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageAppendMethod").new_(key, value, options)) {}


} // namespace webbind