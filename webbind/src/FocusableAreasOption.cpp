#include <webbind/FocusableAreasOption.hpp>

namespace webbind {

FocusableAreasOption::FocusableAreasOption(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FocusableAreasOption FocusableAreasOption::take_ownership(Handle h) noexcept {
    return FocusableAreasOption(h);
}

FocusableAreasOption::FocusableAreasOption(const emlite::Val &val) noexcept: emlite::Val(val) {}

FocusableAreasOption::FocusableAreasOption() noexcept: emlite::Val(emlite::Val::object()) {}

FocusableAreasOption FocusableAreasOption::clone() const noexcept { return *this; }

FocusableAreaSearchMode FocusableAreasOption::mode() const {
    return emlite::Val::get("mode").as<FocusableAreaSearchMode>();
}

void FocusableAreasOption::mode(const FocusableAreaSearchMode& value) {
    emlite::Val::set("mode", value);
}


} // namespace webbind