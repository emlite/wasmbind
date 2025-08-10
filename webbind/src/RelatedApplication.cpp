#include <webbind/RelatedApplication.hpp>

namespace webbind {

RelatedApplication::RelatedApplication(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RelatedApplication RelatedApplication::take_ownership(Handle h) noexcept {
    return RelatedApplication(h);
}

RelatedApplication::RelatedApplication(const emlite::Val &val) noexcept: emlite::Val(val) {}

RelatedApplication::RelatedApplication() noexcept: emlite::Val(emlite::Val::object()) {}

RelatedApplication RelatedApplication::clone() const noexcept { return *this; }

jsbind::String RelatedApplication::platform() const {
    return emlite::Val::get("platform").as<jsbind::String>();
}

void RelatedApplication::platform(const jsbind::String& value) {
    emlite::Val::set("platform", value);
}

jsbind::String RelatedApplication::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void RelatedApplication::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

jsbind::String RelatedApplication::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void RelatedApplication::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String RelatedApplication::version() const {
    return emlite::Val::get("version").as<jsbind::String>();
}

void RelatedApplication::version(const jsbind::String& value) {
    emlite::Val::set("version", value);
}


} // namespace webbind