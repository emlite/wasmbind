#include <webbind/IDBVersionChangeEvent.hpp>


IDBVersionChangeEvent IDBVersionChangeEvent::take_ownership(Handle h) noexcept {
        return IDBVersionChangeEvent(h);
    }
IDBVersionChangeEvent IDBVersionChangeEvent::clone() const noexcept { return *this; }
IDBVersionChangeEvent::IDBVersionChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
IDBVersionChangeEvent::IDBVersionChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


IDBVersionChangeEvent::IDBVersionChangeEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("IDBVersionChangeEvent").new_(type)) {}

IDBVersionChangeEvent::IDBVersionChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("IDBVersionChangeEvent").new_(type, eventInitDict)) {}

long long IDBVersionChangeEvent::oldVersion() const {
    return Event::get("oldVersion").as<long long>();
}

long long IDBVersionChangeEvent::newVersion() const {
    return Event::get("newVersion").as<long long>();
}

