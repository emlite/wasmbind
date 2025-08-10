#include "webbind/Scheduling.hpp"
#include "webbind/IsInputPendingOptions.hpp"

namespace webbind {

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


} // namespace webbind