#include <webbind/SharedStorageSetMethodOptions.hpp>

namespace webbind {

SharedStorageSetMethodOptions::SharedStorageSetMethodOptions(Handle h) noexcept : SharedStorageModifierMethodOptions(emlite::Val::take_ownership(h)) {}
SharedStorageSetMethodOptions SharedStorageSetMethodOptions::take_ownership(Handle h) noexcept {
    return SharedStorageSetMethodOptions(h);
}

SharedStorageSetMethodOptions::SharedStorageSetMethodOptions(const emlite::Val &val) noexcept: SharedStorageModifierMethodOptions(val) {}

SharedStorageSetMethodOptions::SharedStorageSetMethodOptions() noexcept: SharedStorageModifierMethodOptions(emlite::Val::object()) {}

SharedStorageSetMethodOptions SharedStorageSetMethodOptions::clone() const noexcept { return *this; }

bool SharedStorageSetMethodOptions::ignoreIfPresent() const {
    return emlite::Val::get("ignoreIfPresent").as<bool>();
}

void SharedStorageSetMethodOptions::ignoreIfPresent(bool value) {
    emlite::Val::set("ignoreIfPresent", value);
}


} // namespace webbind