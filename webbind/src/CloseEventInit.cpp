#include <webbind/CloseEventInit.hpp>

namespace webbind {

CloseEventInit::CloseEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
CloseEventInit CloseEventInit::take_ownership(Handle h) noexcept {
    return CloseEventInit(h);
}

CloseEventInit::CloseEventInit(const emlite::Val &val) noexcept: EventInit(val) {}

CloseEventInit::CloseEventInit() noexcept: EventInit(emlite::Val::object()) {}

CloseEventInit CloseEventInit::clone() const noexcept { return *this; }

bool CloseEventInit::wasClean() const {
    return emlite::Val::get("wasClean").as<bool>();
}

void CloseEventInit::wasClean(bool value) {
    emlite::Val::set("wasClean", value);
}

unsigned short CloseEventInit::code() const {
    return emlite::Val::get("code").as<unsigned short>();
}

void CloseEventInit::code(unsigned short value) {
    emlite::Val::set("code", value);
}

jsbind::String CloseEventInit::reason() const {
    return emlite::Val::get("reason").as<jsbind::String>();
}

void CloseEventInit::reason(const jsbind::String& value) {
    emlite::Val::set("reason", value);
}


} // namespace webbind