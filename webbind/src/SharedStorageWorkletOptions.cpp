#include <webbind/SharedStorageWorkletOptions.hpp>

using emlite::Val;
namespace webbind {

SharedStorageWorkletOptions::SharedStorageWorkletOptions(Handle h) noexcept : WorkletOptions(emlite::Val::take_ownership(h)) {}
SharedStorageWorkletOptions SharedStorageWorkletOptions::take_ownership(Handle h) noexcept {
        return SharedStorageWorkletOptions(h);
    }
SharedStorageWorkletOptions::SharedStorageWorkletOptions(const emlite::Val &val) noexcept: WorkletOptions(val) {}
SharedStorageWorkletOptions::SharedStorageWorkletOptions() noexcept: WorkletOptions(emlite::Val::object()) {}
SharedStorageWorkletOptions SharedStorageWorkletOptions::clone() const noexcept { return *this; }

jsbind::String SharedStorageWorkletOptions::dataOrigin() const {
    return emlite::Val::get("dataOrigin").as<jsbind::String>();
}

void SharedStorageWorkletOptions::dataOrigin(const jsbind::String& value) {
    emlite::Val::set("dataOrigin", value);
}


} // namespace webbind