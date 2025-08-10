#include <webbind/SubscribeOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

SubscribeOptions::SubscribeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SubscribeOptions SubscribeOptions::take_ownership(Handle h) noexcept {
    return SubscribeOptions(h);
}

SubscribeOptions::SubscribeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SubscribeOptions::SubscribeOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SubscribeOptions SubscribeOptions::clone() const noexcept { return *this; }

AbortSignal SubscribeOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SubscribeOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind