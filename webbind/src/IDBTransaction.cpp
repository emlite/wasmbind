#include "webbind/IDBTransaction.hpp"
#include "webbind/DOMStringList.hpp"
#include "webbind/IDBDatabase.hpp"
#include "webbind/DOMException.hpp"
#include "webbind/IDBObjectStore.hpp"

namespace webbind {

IDBTransaction IDBTransaction::take_ownership(Handle h) noexcept {
        return IDBTransaction(h);
    }
IDBTransaction IDBTransaction::clone() const noexcept { return *this; }
emlite::Val IDBTransaction::instance() noexcept { return emlite::Val::global("IDBTransaction"); }
IDBTransaction::IDBTransaction(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
IDBTransaction::IDBTransaction(const emlite::Val &val) noexcept: EventTarget(val) {}

DOMStringList IDBTransaction::objectStoreNames() const {
    return EventTarget::get("objectStoreNames").as<DOMStringList>();
}

IDBTransactionMode IDBTransaction::mode() const {
    return EventTarget::get("mode").as<IDBTransactionMode>();
}

IDBTransactionDurability IDBTransaction::durability() const {
    return EventTarget::get("durability").as<IDBTransactionDurability>();
}

IDBDatabase IDBTransaction::db() const {
    return EventTarget::get("db").as<IDBDatabase>();
}

DOMException IDBTransaction::error() const {
    return EventTarget::get("error").as<DOMException>();
}

IDBObjectStore IDBTransaction::objectStore(const jsbind::String& name) {
    return EventTarget::call("objectStore", name).as<IDBObjectStore>();
}

jsbind::Undefined IDBTransaction::commit() {
    return EventTarget::call("commit").as<jsbind::Undefined>();
}

jsbind::Undefined IDBTransaction::abort() {
    return EventTarget::call("abort").as<jsbind::Undefined>();
}

jsbind::Any IDBTransaction::onabort() const {
    return EventTarget::get("onabort").as<jsbind::Any>();
}

void IDBTransaction::onabort(const jsbind::Any& value) {
    EventTarget::set("onabort", value);
}

jsbind::Any IDBTransaction::oncomplete() const {
    return EventTarget::get("oncomplete").as<jsbind::Any>();
}

void IDBTransaction::oncomplete(const jsbind::Any& value) {
    EventTarget::set("oncomplete", value);
}

jsbind::Any IDBTransaction::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void IDBTransaction::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}


} // namespace webbind