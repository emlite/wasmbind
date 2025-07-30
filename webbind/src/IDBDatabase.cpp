#include <webbind/IDBDatabase.hpp>
#include <webbind/DOMStringList.hpp>
#include <webbind/IDBTransaction.hpp>
#include <webbind/IDBObjectStore.hpp>


IDBTransactionOptions::IDBTransactionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBTransactionOptions IDBTransactionOptions::take_ownership(Handle h) noexcept {
        return IDBTransactionOptions(h);
    }
IDBTransactionOptions::IDBTransactionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IDBTransactionOptions::IDBTransactionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IDBTransactionOptions IDBTransactionOptions::clone() const noexcept { return *this; }

IDBTransactionDurability IDBTransactionOptions::durability() const {
    return emlite::Val::get("durability").as<IDBTransactionDurability>();
}

void IDBTransactionOptions::durability(const IDBTransactionDurability& value) {
    emlite::Val::set("durability", value);
}

IDBObjectStoreParameters::IDBObjectStoreParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBObjectStoreParameters IDBObjectStoreParameters::take_ownership(Handle h) noexcept {
        return IDBObjectStoreParameters(h);
    }
IDBObjectStoreParameters::IDBObjectStoreParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}
IDBObjectStoreParameters::IDBObjectStoreParameters() noexcept: emlite::Val(emlite::Val::object()) {}
IDBObjectStoreParameters IDBObjectStoreParameters::clone() const noexcept { return *this; }

jsbind::Any IDBObjectStoreParameters::keyPath() const {
    return emlite::Val::get("keyPath").as<jsbind::Any>();
}

void IDBObjectStoreParameters::keyPath(const jsbind::Any& value) {
    emlite::Val::set("keyPath", value);
}

bool IDBObjectStoreParameters::autoIncrement() const {
    return emlite::Val::get("autoIncrement").as<bool>();
}

void IDBObjectStoreParameters::autoIncrement(bool value) {
    emlite::Val::set("autoIncrement", value);
}

IDBDatabase IDBDatabase::take_ownership(Handle h) noexcept {
        return IDBDatabase(h);
    }
IDBDatabase IDBDatabase::clone() const noexcept { return *this; }
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

