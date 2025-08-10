#include <webbind/BreakTokenOptions.hpp>
#include <webbind/ChildBreakToken.hpp>

namespace webbind {

BreakTokenOptions::BreakTokenOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BreakTokenOptions BreakTokenOptions::take_ownership(Handle h) noexcept {
    return BreakTokenOptions(h);
}

BreakTokenOptions::BreakTokenOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

BreakTokenOptions::BreakTokenOptions() noexcept: emlite::Val(emlite::Val::object()) {}

BreakTokenOptions BreakTokenOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<ChildBreakToken> BreakTokenOptions::childBreakTokens() const {
    return emlite::Val::get("childBreakTokens").as<jsbind::TypedArray<ChildBreakToken>>();
}

void BreakTokenOptions::childBreakTokens(const jsbind::TypedArray<ChildBreakToken>& value) {
    emlite::Val::set("childBreakTokens", value);
}

jsbind::Any BreakTokenOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void BreakTokenOptions::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind