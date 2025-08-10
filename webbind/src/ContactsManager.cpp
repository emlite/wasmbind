#include <webbind/ContactsManager.hpp>
#include <webbind/ContactInfo.hpp>
#include <webbind/ContactsSelectOptions.hpp>

namespace webbind {

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


} // namespace webbind