#include <webbind/AddEventListenerOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

AddEventListenerOptions::AddEventListenerOptions(Handle h) noexcept : EventListenerOptions(emlite::Val::take_ownership(h)) {}
AddEventListenerOptions AddEventListenerOptions::take_ownership(Handle h) noexcept {
    return AddEventListenerOptions(h);
}

AddEventListenerOptions::AddEventListenerOptions(const emlite::Val &val) noexcept: EventListenerOptions(val) {}

AddEventListenerOptions::AddEventListenerOptions() noexcept: EventListenerOptions(emlite::Val::object()) {}

AddEventListenerOptions AddEventListenerOptions::clone() const noexcept { return *this; }

bool AddEventListenerOptions::passive() const {
    return emlite::Val::get("passive").as<bool>();
}

void AddEventListenerOptions::passive(bool value) {
    emlite::Val::set("passive", value);
}

bool AddEventListenerOptions::once() const {
    return emlite::Val::get("once").as<bool>();
}

void AddEventListenerOptions::once(bool value) {
    emlite::Val::set("once", value);
}

AbortSignal AddEventListenerOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void AddEventListenerOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind