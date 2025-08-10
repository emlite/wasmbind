#include <webbind/URLPatternComponentResult.hpp>

using emlite::Val;
namespace webbind {

URLPatternComponentResult::URLPatternComponentResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
URLPatternComponentResult URLPatternComponentResult::take_ownership(Handle h) noexcept {
        return URLPatternComponentResult(h);
    }
URLPatternComponentResult::URLPatternComponentResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
URLPatternComponentResult::URLPatternComponentResult() noexcept: emlite::Val(emlite::Val::object()) {}
URLPatternComponentResult URLPatternComponentResult::clone() const noexcept { return *this; }

jsbind::String URLPatternComponentResult::input() const {
    return emlite::Val::get("input").as<jsbind::String>();
}

void URLPatternComponentResult::input(const jsbind::String& value) {
    emlite::Val::set("input", value);
}

jsbind::Record<jsbind::String, jsbind::Any> URLPatternComponentResult::groups() const {
    return emlite::Val::get("groups").as<jsbind::Record<jsbind::String, jsbind::Any>>();
}

void URLPatternComponentResult::groups(const jsbind::Record<jsbind::String, jsbind::Any>& value) {
    emlite::Val::set("groups", value);
}


} // namespace webbind