#include "webbind/AdRender.hpp"

using emlite::Val;
namespace webbind {

AdRender::AdRender(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AdRender AdRender::take_ownership(Handle h) noexcept {
        return AdRender(h);
    }
AdRender::AdRender(const emlite::Val &val) noexcept: emlite::Val(val) {}
AdRender::AdRender() noexcept: emlite::Val(emlite::Val::object()) {}
AdRender AdRender::clone() const noexcept { return *this; }

jsbind::String AdRender::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void AdRender::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

jsbind::String AdRender::width() const {
    return emlite::Val::get("width").as<jsbind::String>();
}

void AdRender::width(const jsbind::String& value) {
    emlite::Val::set("width", value);
}

jsbind::String AdRender::height() const {
    return emlite::Val::get("height").as<jsbind::String>();
}

void AdRender::height(const jsbind::String& value) {
    emlite::Val::set("height", value);
}


} // namespace webbind