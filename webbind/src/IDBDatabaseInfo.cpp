#include <webbind/IDBDatabaseInfo.hpp>

using emlite::Val;
namespace webbind {

IDBDatabaseInfo::IDBDatabaseInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBDatabaseInfo IDBDatabaseInfo::take_ownership(Handle h) noexcept {
        return IDBDatabaseInfo(h);
    }
IDBDatabaseInfo::IDBDatabaseInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
IDBDatabaseInfo::IDBDatabaseInfo() noexcept: emlite::Val(emlite::Val::object()) {}
IDBDatabaseInfo IDBDatabaseInfo::clone() const noexcept { return *this; }

jsbind::String IDBDatabaseInfo::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IDBDatabaseInfo::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

long long IDBDatabaseInfo::version() const {
    return emlite::Val::get("version").as<long long>();
}

void IDBDatabaseInfo::version(long long value) {
    emlite::Val::set("version", value);
}


} // namespace webbind