#include <webbind/WatchAdvertisementsOptions.hpp>
#include <webbind/AbortSignal.hpp>

namespace webbind {

WatchAdvertisementsOptions::WatchAdvertisementsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WatchAdvertisementsOptions WatchAdvertisementsOptions::take_ownership(Handle h) noexcept {
    return WatchAdvertisementsOptions(h);
}

WatchAdvertisementsOptions::WatchAdvertisementsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

WatchAdvertisementsOptions::WatchAdvertisementsOptions() noexcept: emlite::Val(emlite::Val::object()) {}

WatchAdvertisementsOptions WatchAdvertisementsOptions::clone() const noexcept { return *this; }

AbortSignal WatchAdvertisementsOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void WatchAdvertisementsOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind