#include "webbind/URLPatternOptions.hpp"

using emlite::Val;
namespace webbind {

URLPatternOptions::URLPatternOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPatternOptions URLPatternOptions::take_ownership(Handle h) noexcept {
        return URLPatternOptions(h);
    }
URLPatternOptions::URLPatternOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
URLPatternOptions::URLPatternOptions() noexcept: emlite::Val(emlite::Val::object()) {}
URLPatternOptions URLPatternOptions::clone() const noexcept { return *this; }

bool URLPatternOptions::ignoreCase() const {
    return emlite::Val::get("ignoreCase").as<bool>();
}

void URLPatternOptions::ignoreCase(bool value) {
    emlite::Val::set("ignoreCase", value);
}


} // namespace webbind