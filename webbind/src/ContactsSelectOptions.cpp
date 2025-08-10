#include <webbind/ContactsSelectOptions.hpp>

namespace webbind {

ContactsSelectOptions::ContactsSelectOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactsSelectOptions ContactsSelectOptions::take_ownership(Handle h) noexcept {
    return ContactsSelectOptions(h);
}

ContactsSelectOptions::ContactsSelectOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

ContactsSelectOptions::ContactsSelectOptions() noexcept: emlite::Val(emlite::Val::object()) {}

ContactsSelectOptions ContactsSelectOptions::clone() const noexcept { return *this; }

bool ContactsSelectOptions::multiple() const {
    return emlite::Val::get("multiple").as<bool>();
}

void ContactsSelectOptions::multiple(bool value) {
    emlite::Val::set("multiple", value);
}


} // namespace webbind