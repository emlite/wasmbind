#include <webbind/ContactsManager.hpp>
#include <webbind/Blob.hpp>
#include <webbind/ContactAddress.hpp>


ContactInfo::ContactInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactInfo ContactInfo::take_ownership(Handle h) noexcept {
        return ContactInfo(h);
    }
ContactInfo::ContactInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
ContactInfo::ContactInfo() noexcept: emlite::Val(emlite::Val::object()) {}
ContactInfo ContactInfo::clone() const noexcept { return *this; }

jsbind::TypedArray<ContactAddress> ContactInfo::address() const {
    return emlite::Val::get("address").as<jsbind::TypedArray<ContactAddress>>();
}

void ContactInfo::address(const jsbind::TypedArray<ContactAddress>& value) {
    emlite::Val::set("address", value);
}

jsbind::TypedArray<jsbind::String> ContactInfo::email() const {
    return emlite::Val::get("email").as<jsbind::TypedArray<jsbind::String>>();
}

void ContactInfo::email(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("email", value);
}

jsbind::TypedArray<Blob> ContactInfo::icon() const {
    return emlite::Val::get("icon").as<jsbind::TypedArray<Blob>>();
}

void ContactInfo::icon(const jsbind::TypedArray<Blob>& value) {
    emlite::Val::set("icon", value);
}

jsbind::TypedArray<jsbind::String> ContactInfo::name() const {
    return emlite::Val::get("name").as<jsbind::TypedArray<jsbind::String>>();
}

void ContactInfo::name(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("name", value);
}

jsbind::TypedArray<jsbind::String> ContactInfo::tel() const {
    return emlite::Val::get("tel").as<jsbind::TypedArray<jsbind::String>>();
}

void ContactInfo::tel(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("tel", value);
}

ContactsSelectOptions::ContactsSelectOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactsSelectOptions ContactsSelectOptions::take_ownership(Handle h) noexcept {
        return ContactsSelectOptions(h);
    }
ContactsSelectOptions::ContactsSelectOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
ContactsSelectOptions::ContactsSelectOptions() noexcept: emlite::Val(emlite::Val::object()) {}
ContactsSelectOptions ContactsSelectOptions::clone() const noexcept { return *this; }

bool ContactsSelectOptions::multiple() const {
    return emlite::Val::get("multiple").as<bool>();
}

void ContactsSelectOptions::multiple(bool value) {
    emlite::Val::set("multiple", value);
}

ContactsManager ContactsManager::take_ownership(Handle h) noexcept {
        return ContactsManager(h);
    }
ContactsManager ContactsManager::clone() const noexcept { return *this; }
emlite::Val ContactsManager::instance() noexcept { return emlite::Val::global("ContactsManager"); }
ContactsManager::ContactsManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactsManager::ContactsManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::TypedArray<ContactProperty>> ContactsManager::getProperties() {
    return emlite::Val::call("getProperties").as<jsbind::Promise<jsbind::TypedArray<ContactProperty>>>();
}

jsbind::Promise<jsbind::TypedArray<ContactInfo>> ContactsManager::select(const jsbind::TypedArray<ContactProperty>& properties) {
    return emlite::Val::call("select", properties).as<jsbind::Promise<jsbind::TypedArray<ContactInfo>>>();
}

jsbind::Promise<jsbind::TypedArray<ContactInfo>> ContactsManager::select(const jsbind::TypedArray<ContactProperty>& properties, const ContactsSelectOptions& options) {
    return emlite::Val::call("select", properties, options).as<jsbind::Promise<jsbind::TypedArray<ContactInfo>>>();
}

