#include <webbind/IDBVersionChangeEvent.hpp>
#include <webbind/IDBVersionChangeEventInit.hpp>

namespace webbind {

IDBVersionChangeEvent IDBVersionChangeEvent::take_ownership(Handle h) noexcept {
    return IDBVersionChangeEvent(h);
}

IDBVersionChangeEvent IDBVersionChangeEvent::clone() const noexcept { return *this; }

emlite::Val IDBVersionChangeEvent::instance() noexcept { return emlite::Val::global("IDBVersionChangeEvent"); }

IDBVersionChangeEvent::IDBVersionChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}

IDBVersionChangeEvent::IDBVersionChangeEvent(const emlite::Val &val) noexcept: Event(val) {}

IDBVersionChangeEvent::IDBVersionChangeEvent(const jsbind::String& type) : Event(emlite::Val::global("IDBVersionChangeEvent").new_(type)) {}

IDBVersionChangeEvent::IDBVersionChangeEvent(const jsbind::String& type, const IDBVersionChangeEventInit& eventInitDict) : Event(emlite::Val::global("IDBVersionChangeEvent").new_(type, eventInitDict)) {}

long long IDBVersionChangeEvent::oldVersion() const {
    return Event::get("oldVersion").as<long long>();
}

long long IDBVersionChangeEvent::newVersion() const {
    return Event::get("newVersion").as<long long>();
}


} // namespace webbind