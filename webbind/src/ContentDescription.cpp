#include "webbind/ContentDescription.hpp"
#include "webbind/ImageResource.hpp"

using emlite::Val;
namespace webbind {

ContentDescription::ContentDescription(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContentDescription ContentDescription::take_ownership(Handle h) noexcept {
        return ContentDescription(h);
    }
ContentDescription::ContentDescription(const emlite::Val &val) noexcept: emlite::Val(val) {}
ContentDescription::ContentDescription() noexcept: emlite::Val(emlite::Val::object()) {}
ContentDescription ContentDescription::clone() const noexcept { return *this; }

jsbind::String ContentDescription::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void ContentDescription::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String ContentDescription::title() const {
    return emlite::Val::get("title").as<jsbind::String>();
}

void ContentDescription::title(const jsbind::String& value) {
    emlite::Val::set("title", value);
}

jsbind::String ContentDescription::description() const {
    return emlite::Val::get("description").as<jsbind::String>();
}

void ContentDescription::description(const jsbind::String& value) {
    emlite::Val::set("description", value);
}

ContentCategory ContentDescription::category() const {
    return emlite::Val::get("category").as<ContentCategory>();
}

void ContentDescription::category(const ContentCategory& value) {
    emlite::Val::set("category", value);
}

jsbind::TypedArray<ImageResource> ContentDescription::icons() const {
    return emlite::Val::get("icons").as<jsbind::TypedArray<ImageResource>>();
}

void ContentDescription::icons(const jsbind::TypedArray<ImageResource>& value) {
    emlite::Val::set("icons", value);
}

jsbind::String ContentDescription::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void ContentDescription::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}


} // namespace webbind