#include <webbind/IDBDatabase.hpp>
#include <webbind/DOMStringList.hpp>
#include <webbind/IDBTransaction.hpp>
#include <webbind/IDBTransactionOptions.hpp>
#include <webbind/IDBObjectStore.hpp>
#include <webbind/IDBObjectStoreParameters.hpp>

namespace webbind {

IDBDatabase IDBDatabase::take_ownership(Handle h) noexcept {
    return IDBDatabase(h);
}

IDBDatabase IDBDatabase::clone() const noexcept { return *this; }

emlite::Val IDBDatabase::instance() noexcept { return emlite::Val::global("IDBDatabase"); }

IDBDatabase::IDBDatabase(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

IDBDatabase::IDBDatabase(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String IDBDatabase::name() const {
    return EventTarget::get("name").as<jsbind::String>();
}

long long IDBDatabase::version() const {
    return EventTarget::get("version").as<long long>();
}

DOMStringList IDBDatabase::objectStoreNames() const {
    return EventTarget::get("objectStoreNames").as<DOMStringList>();
}

IDBTransaction IDBDatabase::transaction(const jsbind::Any& storeNames) {
    return EventTarget::call("transaction", storeNames).as<IDBTransaction>();
}

IDBTransaction IDBDatabase::transaction(const jsbind::Any& storeNames, const IDBTransactionMode& mode) {
    return EventTarget::call("transaction", storeNames, mode).as<IDBTransaction>();
}

IDBTransaction IDBDatabase::transaction(const jsbind::Any& storeNames, const IDBTransactionMode& mode, const IDBTransactionOptions& options) {
    return EventTarget::call("transaction", storeNames, mode, options).as<IDBTransaction>();
}

jsbind::Undefined IDBDatabase::close() {
    return EventTarget::call("close").as<jsbind::Undefined>();
}

IDBObjectStore IDBDatabase::createObjectStore(const jsbind::String& name) {
    return EventTarget::call("createObjectStore", name).as<IDBObjectStore>();
}

IDBObjectStore IDBDatabase::createObjectStore(const jsbind::String& name, const IDBObjectStoreParameters& options) {
    return EventTarget::call("createObjectStore", name, options).as<IDBObjectStore>();
}

jsbind::Undefined IDBDatabase::deleteObjectStore(const jsbind::String& name) {
    return EventTarget::call("deleteObjectStore", name).as<jsbind::Undefined>();
}

jsbind::Any IDBDatabase::onabort() const {
    return EventTarget::get("onabort").as<jsbind::Any>();
}

void IDBDatabase::onabort(const jsbind::Any& value) {
    EventTarget::set("onabort", value);
}

jsbind::Any IDBDatabase::onclose() const {
    return EventTarget::get("onclose").as<jsbind::Any>();
}

void IDBDatabase::onclose(const jsbind::Any& value) {
    EventTarget::set("onclose", value);
}

jsbind::Any IDBDatabase::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void IDBDatabase::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

jsbind::Any IDBDatabase::onversionchange() const {
    return EventTarget::get("onversionchange").as<jsbind::Any>();
}

void IDBDatabase::onversionchange(const jsbind::Any& value) {
    EventTarget::set("onversionchange", value);
}


} // namespace webbind