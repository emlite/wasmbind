#include <webbind/BackgroundSyncOptions.hpp>

using emlite::Val;
namespace webbind {

BackgroundSyncOptions::BackgroundSyncOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BackgroundSyncOptions BackgroundSyncOptions::take_ownership(Handle h) noexcept {
        return BackgroundSyncOptions(h);
    }
BackgroundSyncOptions::BackgroundSyncOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BackgroundSyncOptions::BackgroundSyncOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BackgroundSyncOptions BackgroundSyncOptions::clone() const noexcept { return *this; }

long long BackgroundSyncOptions::minInterval() const {
    return emlite::Val::get("minInterval").as<long long>();
}

void BackgroundSyncOptions::minInterval(long long value) {
    emlite::Val::set("minInterval", value);
}


} // namespace webbind