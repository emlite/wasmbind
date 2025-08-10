#include "webbind/IDBVersionChangeEventInit.hpp"

using emlite::Val;
namespace webbind {

IDBVersionChangeEventInit::IDBVersionChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
IDBVersionChangeEventInit IDBVersionChangeEventInit::take_ownership(Handle h) noexcept {
        return IDBVersionChangeEventInit(h);
    }
IDBVersionChangeEventInit::IDBVersionChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
IDBVersionChangeEventInit::IDBVersionChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
IDBVersionChangeEventInit IDBVersionChangeEventInit::clone() const noexcept { return *this; }

long long IDBVersionChangeEventInit::oldVersion() const {
    return emlite::Val::get("oldVersion").as<long long>();
}

void IDBVersionChangeEventInit::oldVersion(long long value) {
    emlite::Val::set("oldVersion", value);
}

long long IDBVersionChangeEventInit::newVersion() const {
    return emlite::Val::get("newVersion").as<long long>();
}

void IDBVersionChangeEventInit::newVersion(long long value) {
    emlite::Val::set("newVersion", value);
}


} // namespace webbind