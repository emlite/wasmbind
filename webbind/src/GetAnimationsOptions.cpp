#include <webbind/GetAnimationsOptions.hpp>

namespace webbind {

GetAnimationsOptions::GetAnimationsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetAnimationsOptions GetAnimationsOptions::take_ownership(Handle h) noexcept {
    return GetAnimationsOptions(h);
}

GetAnimationsOptions::GetAnimationsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

GetAnimationsOptions::GetAnimationsOptions() noexcept: emlite::Val(emlite::Val::object()) {}

GetAnimationsOptions GetAnimationsOptions::clone() const noexcept { return *this; }

bool GetAnimationsOptions::subtree() const {
    return emlite::Val::get("subtree").as<bool>();
}

void GetAnimationsOptions::subtree(bool value) {
    emlite::Val::set("subtree", value);
}

jsbind::String GetAnimationsOptions::pseudoElement() const {
    return emlite::Val::get("pseudoElement").as<jsbind::String>();
}

void GetAnimationsOptions::pseudoElement(const jsbind::String& value) {
    emlite::Val::set("pseudoElement", value);
}


} // namespace webbind