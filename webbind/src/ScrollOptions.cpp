#include "webbind/ScrollOptions.hpp"

using emlite::Val;
namespace webbind {

ScrollOptions::ScrollOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ScrollOptions ScrollOptions::take_ownership(Handle h) noexcept {
        return ScrollOptions(h);
    }
ScrollOptions::ScrollOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ScrollOptions::ScrollOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ScrollOptions ScrollOptions::clone() const noexcept { return *this; }

ScrollBehavior ScrollOptions::behavior() const {
    return emlite::Val::get("behavior").as<ScrollBehavior>();
}

void ScrollOptions::behavior(const ScrollBehavior& value) {
    emlite::Val::set("behavior", value);
}


} // namespace webbind