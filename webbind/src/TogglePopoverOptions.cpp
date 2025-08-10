#include "webbind/TogglePopoverOptions.hpp"

using emlite::Val;
namespace webbind {

TogglePopoverOptions::TogglePopoverOptions(Handle h) noexcept : ShowPopoverOptions(emlite::Val::take_ownership(h)) {}
TogglePopoverOptions TogglePopoverOptions::take_ownership(Handle h) noexcept {
        return TogglePopoverOptions(h);
    }
TogglePopoverOptions::TogglePopoverOptions(const emlite::Val &val) noexcept: ShowPopoverOptions(val) {}
TogglePopoverOptions::TogglePopoverOptions() noexcept: ShowPopoverOptions(emlite::Val::object()) {}
TogglePopoverOptions TogglePopoverOptions::clone() const noexcept { return *this; }

bool TogglePopoverOptions::force() const {
    return emlite::Val::get("force").as<bool>();
}

void TogglePopoverOptions::force(bool value) {
    emlite::Val::set("force", value);
}


} // namespace webbind