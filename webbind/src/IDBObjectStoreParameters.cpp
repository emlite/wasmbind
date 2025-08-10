#include <webbind/IDBObjectStoreParameters.hpp>

namespace webbind {

IDBObjectStoreParameters::IDBObjectStoreParameters(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBObjectStoreParameters IDBObjectStoreParameters::take_ownership(Handle h) noexcept {
    return IDBObjectStoreParameters(h);
}

IDBObjectStoreParameters::IDBObjectStoreParameters(const emlite::Val &val) noexcept: emlite::Val(val) {}

IDBObjectStoreParameters::IDBObjectStoreParameters() noexcept: emlite::Val(emlite::Val::object()) {}

IDBObjectStoreParameters IDBObjectStoreParameters::clone() const noexcept { return *this; }

jsbind::Any IDBObjectStoreParameters::keyPath() const {
    return emlite::Val::get("keyPath").as<jsbind::Any>();
}

void IDBObjectStoreParameters::keyPath(const jsbind::Any& value) {
    emlite::Val::set("keyPath", value);
}

bool IDBObjectStoreParameters::autoIncrement() const {
    return emlite::Val::get("autoIncrement").as<bool>();
}

void IDBObjectStoreParameters::autoIncrement(bool value) {
    emlite::Val::set("autoIncrement", value);
}


} // namespace webbind