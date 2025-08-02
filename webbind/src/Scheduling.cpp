#include <webbind/Scheduling.hpp>


IsInputPendingOptions::IsInputPendingOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IsInputPendingOptions IsInputPendingOptions::take_ownership(Handle h) noexcept {
        return IsInputPendingOptions(h);
    }
IsInputPendingOptions::IsInputPendingOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IsInputPendingOptions::IsInputPendingOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IsInputPendingOptions IsInputPendingOptions::clone() const noexcept { return *this; }

bool IsInputPendingOptions::includeContinuous() const {
    return emlite::Val::get("includeContinuous").as<bool>();
}

void IsInputPendingOptions::includeContinuous(bool value) {
    emlite::Val::set("includeContinuous", value);
}

Scheduling Scheduling::take_ownership(Handle h) noexcept {
        return Scheduling(h);
    }
Scheduling Scheduling::clone() const noexcept { return *this; }
emlite::Val Scheduling::instance() noexcept { return emlite::Val::global("Scheduling"); }
Scheduling::Scheduling(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Scheduling::Scheduling(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool Scheduling::isInputPending() {
    return emlite::Val::call("isInputPending").as<bool>();
}

bool Scheduling::isInputPending(const IsInputPendingOptions& isInputPendingOptions) {
    return emlite::Val::call("isInputPending", isInputPendingOptions).as<bool>();
}

