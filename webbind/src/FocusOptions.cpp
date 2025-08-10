#include <webbind/FocusOptions.hpp>

using emlite::Val;
namespace webbind {

FocusOptions::FocusOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FocusOptions FocusOptions::take_ownership(Handle h) noexcept {
        return FocusOptions(h);
    }
FocusOptions::FocusOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FocusOptions::FocusOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FocusOptions FocusOptions::clone() const noexcept { return *this; }

bool FocusOptions::preventScroll() const {
    return emlite::Val::get("preventScroll").as<bool>();
}

void FocusOptions::preventScroll(bool value) {
    emlite::Val::set("preventScroll", value);
}

bool FocusOptions::focusVisible() const {
    return emlite::Val::get("focusVisible").as<bool>();
}

void FocusOptions::focusVisible(bool value) {
    emlite::Val::set("focusVisible", value);
}


} // namespace webbind