#include <webbind/IDBFactory.hpp>
#include <webbind/IDBOpenDBRequest.hpp>


IDBDatabaseInfo::IDBDatabaseInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBDatabaseInfo IDBDatabaseInfo::take_ownership(Handle h) noexcept {
        return IDBDatabaseInfo(h);
    }
IDBDatabaseInfo::IDBDatabaseInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
IDBDatabaseInfo::IDBDatabaseInfo() noexcept: emlite::Val(emlite::Val::object()) {}
IDBDatabaseInfo IDBDatabaseInfo::clone() const noexcept { return *this; }

jsbind::DOMString IDBDatabaseInfo::name() const {
    return emlite::Val::get("name").as<jsbind::DOMString>();
}

void IDBDatabaseInfo::name(const jsbind::DOMString& value) {
    emlite::Val::set("name", value);
}

long long IDBDatabaseInfo::version() const {
    return emlite::Val::get("version").as<long long>();
}

void IDBDatabaseInfo::version(long long value) {
    emlite::Val::set("version", value);
}

IDBFactory IDBFactory::take_ownership(Handle h) noexcept {
        return IDBFactory(h);
    }
IDBFactory IDBFactory::clone() const noexcept { return *this; }
IDBFactory::IDBFactory(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBFactory::IDBFactory(const emlite::Val &val) noexcept: emlite::Val(val) {}


IDBOpenDBRequest IDBFactory::open(const jsbind::DOMString& name) {
    return emlite::Val::call("open", name).as<IDBOpenDBRequest>();
}

IDBOpenDBRequest IDBFactory::open(const jsbind::DOMString& name, long long version) {
    return emlite::Val::call("open", name, version).as<IDBOpenDBRequest>();
}

IDBOpenDBRequest IDBFactory::deleteDatabase(const jsbind::DOMString& name) {
    return emlite::Val::call("deleteDatabase", name).as<IDBOpenDBRequest>();
}

jsbind::Promise IDBFactory::databases() {
    return emlite::Val::call("databases").as<jsbind::Promise>();
}

short IDBFactory::cmp(const jsbind::Any& first, const jsbind::Any& second) {
    return emlite::Val::call("cmp", first, second).as<short>();
}

