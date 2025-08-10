#include <webbind/ResponseInit.hpp>

using emlite::Val;
namespace webbind {

ResponseInit::ResponseInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ResponseInit ResponseInit::take_ownership(Handle h) noexcept {
        return ResponseInit(h);
    }
ResponseInit::ResponseInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
ResponseInit::ResponseInit() noexcept: emlite::Val(emlite::Val::object()) {}
ResponseInit ResponseInit::clone() const noexcept { return *this; }

unsigned short ResponseInit::status() const {
    return emlite::Val::get("status").as<unsigned short>();
}

void ResponseInit::status(unsigned short value) {
    emlite::Val::set("status", value);
}

jsbind::String ResponseInit::statusText() const {
    return emlite::Val::get("statusText").as<jsbind::String>();
}

void ResponseInit::statusText(const jsbind::String& value) {
    emlite::Val::set("statusText", value);
}

jsbind::Any ResponseInit::headers() const {
    return emlite::Val::get("headers").as<jsbind::Any>();
}

void ResponseInit::headers(const jsbind::Any& value) {
    emlite::Val::set("headers", value);
}


} // namespace webbind