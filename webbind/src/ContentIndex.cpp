#include <webbind/ContentIndex.hpp>


ContentDescription::ContentDescription(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContentDescription ContentDescription::take_ownership(Handle h) noexcept {
        return ContentDescription(h);
    }
ContentDescription::ContentDescription(const emlite::Val &val) noexcept: emlite::Val(val) {}
ContentDescription::ContentDescription() noexcept: emlite::Val(emlite::Val::object()) {}
ContentDescription ContentDescription::clone() const noexcept { return *this; }

jsbind::DOMString ContentDescription::id() const {
    return emlite::Val::get("id").as<jsbind::DOMString>();
}

void ContentDescription::id(const jsbind::DOMString& value) {
    emlite::Val::set("id", value);
}

jsbind::DOMString ContentDescription::title() const {
    return emlite::Val::get("title").as<jsbind::DOMString>();
}

void ContentDescription::title(const jsbind::DOMString& value) {
    emlite::Val::set("title", value);
}

jsbind::DOMString ContentDescription::description() const {
    return emlite::Val::get("description").as<jsbind::DOMString>();
}

void ContentDescription::description(const jsbind::DOMString& value) {
    emlite::Val::set("description", value);
}

ContentCategory ContentDescription::category() const {
    return emlite::Val::get("category").as<ContentCategory>();
}

void ContentDescription::category(const ContentCategory& value) {
    emlite::Val::set("category", value);
}

jsbind::Sequence<jsbind::Any> ContentDescription::icons() const {
    return emlite::Val::get("icons").as<jsbind::Sequence<jsbind::Any>>();
}

void ContentDescription::icons(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("icons", value);
}

jsbind::USVString ContentDescription::url() const {
    return emlite::Val::get("url").as<jsbind::USVString>();
}

void ContentDescription::url(const jsbind::USVString& value) {
    emlite::Val::set("url", value);
}

ContentIndex ContentIndex::take_ownership(Handle h) noexcept {
        return ContentIndex(h);
    }
ContentIndex ContentIndex::clone() const noexcept { return *this; }
ContentIndex::ContentIndex(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContentIndex::ContentIndex(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Undefined> ContentIndex::add(const ContentDescription& description) {
    return emlite::Val::call("add", description).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> ContentIndex::delete_(const jsbind::DOMString& id) {
    return emlite::Val::call("delete", id).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Sequence<ContentDescription>> ContentIndex::getAll() {
    return emlite::Val::call("getAll").as<jsbind::Promise<jsbind::Sequence<ContentDescription>>>();
}

