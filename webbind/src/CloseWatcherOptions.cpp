#include <webbind/CloseWatcherOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

CloseWatcherOptions::CloseWatcherOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CloseWatcherOptions CloseWatcherOptions::take_ownership(Handle h) noexcept {
        return CloseWatcherOptions(h);
    }
CloseWatcherOptions::CloseWatcherOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CloseWatcherOptions::CloseWatcherOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CloseWatcherOptions CloseWatcherOptions::clone() const noexcept { return *this; }

AbortSignal CloseWatcherOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void CloseWatcherOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind