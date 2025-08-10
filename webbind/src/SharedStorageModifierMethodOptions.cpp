#include <webbind/SharedStorageModifierMethodOptions.hpp>

using emlite::Val;
namespace webbind {

SharedStorageModifierMethodOptions::SharedStorageModifierMethodOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions::take_ownership(Handle h) noexcept {
        return SharedStorageModifierMethodOptions(h);
    }
SharedStorageModifierMethodOptions::SharedStorageModifierMethodOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SharedStorageModifierMethodOptions::SharedStorageModifierMethodOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions::clone() const noexcept { return *this; }

jsbind::String SharedStorageModifierMethodOptions::withLock() const {
    return emlite::Val::get("withLock").as<jsbind::String>();
}

void SharedStorageModifierMethodOptions::withLock(const jsbind::String& value) {
    emlite::Val::set("withLock", value);
}


} // namespace webbind