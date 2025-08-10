#include "webbind/IDBRequest.hpp"
#include "webbind/DOMException.hpp"
#include "webbind/IDBTransaction.hpp"

namespace webbind {

IDBRequest IDBRequest::take_ownership(Handle h) noexcept {
        return IDBRequest(h);
    }
IDBRequest IDBRequest::clone() const noexcept { return *this; }
emlite::Val IDBRequest::instance() noexcept { return emlite::Val::global("IDBRequest"); }
IDBRequest::IDBRequest(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
IDBRequest::IDBRequest(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any IDBRequest::result() const {
    return EventTarget::get("result").as<jsbind::Any>();
}

DOMException IDBRequest::error() const {
    return EventTarget::get("error").as<DOMException>();
}

jsbind::Any IDBRequest::source() const {
    return EventTarget::get("source").as<jsbind::Any>();
}

IDBTransaction IDBRequest::transaction() const {
    return EventTarget::get("transaction").as<IDBTransaction>();
}

IDBRequestReadyState IDBRequest::readyState() const {
    return EventTarget::get("readyState").as<IDBRequestReadyState>();
}

jsbind::Any IDBRequest::onsuccess() const {
    return EventTarget::get("onsuccess").as<jsbind::Any>();
}

void IDBRequest::onsuccess(const jsbind::Any& value) {
    EventTarget::set("onsuccess", value);
}

jsbind::Any IDBRequest::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void IDBRequest::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}


} // namespace webbind