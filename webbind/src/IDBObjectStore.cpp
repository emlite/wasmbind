#include <webbind/IDBObjectStore.hpp>
#include <webbind/DOMStringList.hpp>
#include <webbind/IDBTransaction.hpp>
#include <webbind/IDBRequest.hpp>
#include <webbind/IDBIndex.hpp>
#include <webbind/IDBIndexParameters.hpp>

namespace webbind {

IDBObjectStore IDBObjectStore::take_ownership(Handle h) noexcept {
        return IDBObjectStore(h);
    }
IDBObjectStore IDBObjectStore::clone() const noexcept { return *this; }
emlite::Val IDBObjectStore::instance() noexcept { return emlite::Val::global("IDBObjectStore"); }
IDBObjectStore::IDBObjectStore(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBObjectStore::IDBObjectStore(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String IDBObjectStore::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IDBObjectStore::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::Any IDBObjectStore::keyPath() const {
    return emlite::Val::get("keyPath").as<jsbind::Any>();
}

DOMStringList IDBObjectStore::indexNames() const {
    return emlite::Val::get("indexNames").as<DOMStringList>();
}

IDBTransaction IDBObjectStore::transaction() const {
    return emlite::Val::get("transaction").as<IDBTransaction>();
}

bool IDBObjectStore::autoIncrement() const {
    return emlite::Val::get("autoIncrement").as<bool>();
}

IDBRequest IDBObjectStore::put(const jsbind::Any& value) {
    return emlite::Val::call("put", value).as<IDBRequest>();
}

IDBRequest IDBObjectStore::put(const jsbind::Any& value, const jsbind::Any& key) {
    return emlite::Val::call("put", value, key).as<IDBRequest>();
}

IDBRequest IDBObjectStore::add(const jsbind::Any& value) {
    return emlite::Val::call("add", value).as<IDBRequest>();
}

IDBRequest IDBObjectStore::add(const jsbind::Any& value, const jsbind::Any& key) {
    return emlite::Val::call("add", value, key).as<IDBRequest>();
}

IDBRequest IDBObjectStore::delete_(const jsbind::Any& query) {
    return emlite::Val::call("delete", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::clear() {
    return emlite::Val::call("clear").as<IDBRequest>();
}

IDBRequest IDBObjectStore::get(const jsbind::Any& query) {
    return emlite::Val::call("get", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::getKey(const jsbind::Any& query) {
    return emlite::Val::call("getKey", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::getAll() {
    return emlite::Val::call("getAll").as<IDBRequest>();
}

IDBRequest IDBObjectStore::getAll(const jsbind::Any& query) {
    return emlite::Val::call("getAll", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::getAll(const jsbind::Any& query, unsigned long count) {
    return emlite::Val::call("getAll", query, count).as<IDBRequest>();
}

IDBRequest IDBObjectStore::getAllKeys() {
    return emlite::Val::call("getAllKeys").as<IDBRequest>();
}

IDBRequest IDBObjectStore::getAllKeys(const jsbind::Any& query) {
    return emlite::Val::call("getAllKeys", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::getAllKeys(const jsbind::Any& query, unsigned long count) {
    return emlite::Val::call("getAllKeys", query, count).as<IDBRequest>();
}

IDBRequest IDBObjectStore::count() {
    return emlite::Val::call("count").as<IDBRequest>();
}

IDBRequest IDBObjectStore::count(const jsbind::Any& query) {
    return emlite::Val::call("count", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::openCursor() {
    return emlite::Val::call("openCursor").as<IDBRequest>();
}

IDBRequest IDBObjectStore::openCursor(const jsbind::Any& query) {
    return emlite::Val::call("openCursor", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::openCursor(const jsbind::Any& query, const IDBCursorDirection& direction) {
    return emlite::Val::call("openCursor", query, direction).as<IDBRequest>();
}

IDBRequest IDBObjectStore::openKeyCursor() {
    return emlite::Val::call("openKeyCursor").as<IDBRequest>();
}

IDBRequest IDBObjectStore::openKeyCursor(const jsbind::Any& query) {
    return emlite::Val::call("openKeyCursor", query).as<IDBRequest>();
}

IDBRequest IDBObjectStore::openKeyCursor(const jsbind::Any& query, const IDBCursorDirection& direction) {
    return emlite::Val::call("openKeyCursor", query, direction).as<IDBRequest>();
}

IDBIndex IDBObjectStore::index(const jsbind::String& name) {
    return emlite::Val::call("index", name).as<IDBIndex>();
}

IDBIndex IDBObjectStore::createIndex(const jsbind::String& name, const jsbind::Any& keyPath) {
    return emlite::Val::call("createIndex", name, keyPath).as<IDBIndex>();
}

IDBIndex IDBObjectStore::createIndex(const jsbind::String& name, const jsbind::Any& keyPath, const IDBIndexParameters& options) {
    return emlite::Val::call("createIndex", name, keyPath, options).as<IDBIndex>();
}

jsbind::Undefined IDBObjectStore::deleteIndex(const jsbind::String& name) {
    return emlite::Val::call("deleteIndex", name).as<jsbind::Undefined>();
}


} // namespace webbind