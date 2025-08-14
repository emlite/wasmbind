#include <webbind/IDBGetAllOptions.hpp>

namespace webbind {

IDBGetAllOptions::IDBGetAllOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBGetAllOptions IDBGetAllOptions::take_ownership(Handle h) noexcept {
    return IDBGetAllOptions(h);
}

IDBGetAllOptions::IDBGetAllOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

IDBGetAllOptions::IDBGetAllOptions() noexcept: emlite::Val(emlite::Val::object()) {}

IDBGetAllOptions IDBGetAllOptions::clone() const noexcept { return *this; }

jsbind::Any IDBGetAllOptions::query() const {
    return emlite::Val::get("query").as<jsbind::Any>();
}

void IDBGetAllOptions::query(const jsbind::Any& value) {
    emlite::Val::set("query", value);
}

unsigned long IDBGetAllOptions::count() const {
    return emlite::Val::get("count").as<unsigned long>();
}

void IDBGetAllOptions::count(unsigned long value) {
    emlite::Val::set("count", value);
}

IDBCursorDirection IDBGetAllOptions::direction() const {
    return emlite::Val::get("direction").as<IDBCursorDirection>();
}

void IDBGetAllOptions::direction(const IDBCursorDirection& value) {
    emlite::Val::set("direction", value);
}


} // namespace webbind