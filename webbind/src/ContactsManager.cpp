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

jsbind::Sequence<ContactAddress> ContactInfo::address() const {
    return emlite::Val::get("address").as<jsbind::Sequence<ContactAddress>>();
}

void ContactInfo::address(const jsbind::Sequence<ContactAddress>& value) {
    emlite::Val::set("address", value);
}

jsbind::Sequence<jsbind::DOMString> ContactInfo::email() const {
    return emlite::Val::get("email").as<jsbind::Sequence<jsbind::DOMString>>();
}

void ContactInfo::email(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("email", value);
}

jsbind::Sequence<Blob> ContactInfo::icon() const {
    return emlite::Val::get("icon").as<jsbind::Sequence<Blob>>();
}

void ContactInfo::icon(const jsbind::Sequence<Blob>& value) {
    emlite::Val::set("icon", value);
}

jsbind::Sequence<jsbind::DOMString> ContactInfo::name() const {
    return emlite::Val::get("name").as<jsbind::Sequence<jsbind::DOMString>>();
}

void ContactInfo::name(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("name", value);
}

jsbind::Sequence<jsbind::DOMString> ContactInfo::tel() const {
    return emlite::Val::get("tel").as<jsbind::Sequence<jsbind::DOMString>>();
}

void ContactInfo::tel(const jsbind::Sequence<jsbind::DOMString>& value) {
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
ContactsManager::ContactsManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ContactsManager::ContactsManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Sequence<ContactProperty>> ContactsManager::getProperties() {
    return emlite::Val::call("getProperties").as<jsbind::Promise<jsbind::Sequence<ContactProperty>>>();
}

jsbind::Promise<jsbind::Sequence<ContactInfo>> ContactsManager::select(const jsbind::Sequence<ContactProperty>& properties) {
    return emlite::Val::call("select", properties).as<jsbind::Promise<jsbind::Sequence<ContactInfo>>>();
}

jsbind::Promise<jsbind::Sequence<ContactInfo>> ContactsManager::select(const jsbind::Sequence<ContactProperty>& properties, const ContactsSelectOptions& options) {
    return emlite::Val::call("select", properties, options).as<jsbind::Promise<jsbind::Sequence<ContactInfo>>>();
}

