#include "webbind/ObservableEventListenerOptions.hpp"

using emlite::Val;
namespace webbind {

ObservableEventListenerOptions::ObservableEventListenerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ObservableEventListenerOptions ObservableEventListenerOptions::take_ownership(Handle h) noexcept {
        return ObservableEventListenerOptions(h);
    }
ObservableEventListenerOptions::ObservableEventListenerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ObservableEventListenerOptions::ObservableEventListenerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ObservableEventListenerOptions ObservableEventListenerOptions::clone() const noexcept { return *this; }

bool ObservableEventListenerOptions::capture() const {
    return emlite::Val::get("capture").as<bool>();
}

void ObservableEventListenerOptions::capture(bool value) {
    emlite::Val::set("capture", value);
}

bool ObservableEventListenerOptions::passive() const {
    return emlite::Val::get("passive").as<bool>();
}

void ObservableEventListenerOptions::passive(bool value) {
    emlite::Val::set("passive", value);
}


} // namespace webbind