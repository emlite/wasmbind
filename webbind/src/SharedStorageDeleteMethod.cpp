#include "webbind/SharedStorageDeleteMethod.hpp"
#include "webbind/SharedStorageModifierMethodOptions.hpp"

namespace webbind {

SharedStorageDeleteMethod SharedStorageDeleteMethod::take_ownership(Handle h) noexcept {
        return SharedStorageDeleteMethod(h);
    }
SharedStorageDeleteMethod SharedStorageDeleteMethod::clone() const noexcept { return *this; }
emlite::Val SharedStorageDeleteMethod::instance() noexcept { return emlite::Val::global("SharedStorageDeleteMethod"); }
SharedStorageDeleteMethod::SharedStorageDeleteMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}
SharedStorageDeleteMethod::SharedStorageDeleteMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}

SharedStorageDeleteMethod::SharedStorageDeleteMethod(const jsbind::String& key) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageDeleteMethod").new_(key)) {}

SharedStorageDeleteMethod::SharedStorageDeleteMethod(const jsbind::String& key, const SharedStorageModifierMethodOptions& options) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageDeleteMethod").new_(key, options)) {}


} // namespace webbind