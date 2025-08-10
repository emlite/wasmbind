#include "webbind/IDBFactory.hpp"
#include "webbind/IDBOpenDBRequest.hpp"
#include "webbind/IDBDatabaseInfo.hpp"

namespace webbind {

IDBFactory IDBFactory::take_ownership(Handle h) noexcept {
        return IDBFactory(h);
    }
IDBFactory IDBFactory::clone() const noexcept { return *this; }
emlite::Val IDBFactory::instance() noexcept { return emlite::Val::global("IDBFactory"); }
IDBFactory::IDBFactory(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBFactory::IDBFactory(const emlite::Val &val) noexcept: emlite::Val(val) {}

IDBOpenDBRequest IDBFactory::open(const jsbind::String& name) {
    return emlite::Val::call("open", name).as<IDBOpenDBRequest>();
}

IDBOpenDBRequest IDBFactory::open(const jsbind::String& name, long long version) {
    return emlite::Val::call("open", name, version).as<IDBOpenDBRequest>();
}

IDBOpenDBRequest IDBFactory::deleteDatabase(const jsbind::String& name) {
    return emlite::Val::call("deleteDatabase", name).as<IDBOpenDBRequest>();
}

jsbind::Promise<jsbind::TypedArray<IDBDatabaseInfo>> IDBFactory::databases() {
    return emlite::Val::call("databases").as<jsbind::Promise<jsbind::TypedArray<IDBDatabaseInfo>>>();
}

short IDBFactory::cmp(const jsbind::Any& first, const jsbind::Any& second) {
    return emlite::Val::call("cmp", first, second).as<short>();
}


} // namespace webbind