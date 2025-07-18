#include <webbind/IDBOpenDBRequest.hpp>


IDBOpenDBRequest IDBOpenDBRequest::take_ownership(Handle h) noexcept {
        return IDBOpenDBRequest(h);
    }
IDBOpenDBRequest IDBOpenDBRequest::clone() const noexcept { return *this; }
IDBOpenDBRequest::IDBOpenDBRequest(Handle h) noexcept : IDBRequest(emlite::Val::take_ownership(h)) {}
IDBOpenDBRequest::IDBOpenDBRequest(const emlite::Val &val) noexcept: IDBRequest(val) {}


jsbind::Any IDBOpenDBRequest::onblocked() const {
    return IDBRequest::get("onblocked").as<jsbind::Any>();
}

void IDBOpenDBRequest::onblocked(const jsbind::Any& value) {
    IDBRequest::set("onblocked", value);
}

jsbind::Any IDBOpenDBRequest::onupgradeneeded() const {
    return IDBRequest::get("onupgradeneeded").as<jsbind::Any>();
}

void IDBOpenDBRequest::onupgradeneeded(const jsbind::Any& value) {
    IDBRequest::set("onupgradeneeded", value);
}

