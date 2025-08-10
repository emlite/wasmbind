#include <webbind/FullscreenOptions.hpp>
#include <webbind/ScreenDetailed.hpp>

namespace webbind {

FullscreenOptions::FullscreenOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FullscreenOptions FullscreenOptions::take_ownership(Handle h) noexcept {
    return FullscreenOptions(h);
}

FullscreenOptions::FullscreenOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

FullscreenOptions::FullscreenOptions() noexcept: emlite::Val(emlite::Val::object()) {}

FullscreenOptions FullscreenOptions::clone() const noexcept { return *this; }

ScreenDetailed FullscreenOptions::screen() const {
    return emlite::Val::get("screen").as<ScreenDetailed>();
}

void FullscreenOptions::screen(const ScreenDetailed& value) {
    emlite::Val::set("screen", value);
}


} // namespace webbind