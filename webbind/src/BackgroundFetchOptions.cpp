#include "webbind/BackgroundFetchOptions.hpp"

using emlite::Val;
namespace webbind {

BackgroundFetchOptions::BackgroundFetchOptions(Handle h) noexcept : BackgroundFetchUIOptions(emlite::Val::take_ownership(h)) {}
BackgroundFetchOptions BackgroundFetchOptions::take_ownership(Handle h) noexcept {
        return BackgroundFetchOptions(h);
    }
BackgroundFetchOptions::BackgroundFetchOptions(const emlite::Val &val) noexcept: BackgroundFetchUIOptions(val) {}
BackgroundFetchOptions::BackgroundFetchOptions() noexcept: BackgroundFetchUIOptions(emlite::Val::object()) {}
BackgroundFetchOptions BackgroundFetchOptions::clone() const noexcept { return *this; }

long long BackgroundFetchOptions::downloadTotal() const {
    return emlite::Val::get("downloadTotal").as<long long>();
}

void BackgroundFetchOptions::downloadTotal(long long value) {
    emlite::Val::set("downloadTotal", value);
}


} // namespace webbind