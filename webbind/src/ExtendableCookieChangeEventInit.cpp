#include <webbind/ExtendableCookieChangeEventInit.hpp>

using emlite::Val;
namespace webbind {

ExtendableCookieChangeEventInit::ExtendableCookieChangeEventInit(Handle h) noexcept : ExtendableEventInit(emlite::Val::take_ownership(h)) {}
ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit::take_ownership(Handle h) noexcept {
        return ExtendableCookieChangeEventInit(h);
    }
ExtendableCookieChangeEventInit::ExtendableCookieChangeEventInit(const emlite::Val &val) noexcept: ExtendableEventInit(val) {}
ExtendableCookieChangeEventInit::ExtendableCookieChangeEventInit() noexcept: ExtendableEventInit(emlite::Val::object()) {}
ExtendableCookieChangeEventInit ExtendableCookieChangeEventInit::clone() const noexcept { return *this; }

jsbind::Any ExtendableCookieChangeEventInit::changed() const {
    return emlite::Val::get("changed").as<jsbind::Any>();
}

void ExtendableCookieChangeEventInit::changed(const jsbind::Any& value) {
    emlite::Val::set("changed", value);
}

jsbind::Any ExtendableCookieChangeEventInit::deleted() const {
    return emlite::Val::get("deleted").as<jsbind::Any>();
}

void ExtendableCookieChangeEventInit::deleted(const jsbind::Any& value) {
    emlite::Val::set("deleted", value);
}


} // namespace webbind