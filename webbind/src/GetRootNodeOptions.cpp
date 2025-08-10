#include <webbind/GetRootNodeOptions.hpp>

namespace webbind {

GetRootNodeOptions::GetRootNodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetRootNodeOptions GetRootNodeOptions::take_ownership(Handle h) noexcept {
    return GetRootNodeOptions(h);
}

GetRootNodeOptions::GetRootNodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

GetRootNodeOptions::GetRootNodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}

GetRootNodeOptions GetRootNodeOptions::clone() const noexcept { return *this; }

bool GetRootNodeOptions::composed() const {
    return emlite::Val::get("composed").as<bool>();
}

void GetRootNodeOptions::composed(bool value) {
    emlite::Val::set("composed", value);
}


} // namespace webbind