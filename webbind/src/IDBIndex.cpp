#include <webbind/IDBIndex.hpp>
#include <webbind/IDBObjectStore.hpp>
#include <webbind/IDBRequest.hpp>

namespace webbind {

IDBIndex IDBIndex::take_ownership(Handle h) noexcept {
        return IDBIndex(h);
    }
IDBIndex IDBIndex::clone() const noexcept { return *this; }
emlite::Val IDBIndex::instance() noexcept { return emlite::Val::global("IDBIndex"); }
IDBIndex::IDBIndex(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBIndex::IDBIndex(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::String IDBIndex::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void IDBIndex::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

IDBObjectStore IDBIndex::objectStore() const {
    return emlite::Val::get("objectStore").as<IDBObjectStore>();
}

jsbind::Any IDBIndex::keyPath() const {
    return emlite::Val::get("keyPath").as<jsbind::Any>();
}

bool IDBIndex::multiEntry() const {
    return emlite::Val::get("multiEntry").as<bool>();
}

bool IDBIndex::unique() const {
    return emlite::Val::get("unique").as<bool>();
}

IDBRequest IDBIndex::get(const jsbind::Any& query) {
    return emlite::Val::call("get", query).as<IDBRequest>();
}

IDBRequest IDBIndex::getKey(const jsbind::Any& query) {
    return emlite::Val::call("getKey", query).as<IDBRequest>();
}

IDBRequest IDBIndex::getAll() {
    return emlite::Val::call("getAll").as<IDBRequest>();
}

IDBRequest IDBIndex::getAll(const jsbind::Any& query) {
    return emlite::Val::call("getAll", query).as<IDBRequest>();
}

IDBRequest IDBIndex::getAll(const jsbind::Any& query, unsigned long count) {
    return emlite::Val::call("getAll", query, count).as<IDBRequest>();
}

IDBRequest IDBIndex::getAllKeys() {
    return emlite::Val::call("getAllKeys").as<IDBRequest>();
}

IDBRequest IDBIndex::getAllKeys(const jsbind::Any& query) {
    return emlite::Val::call("getAllKeys", query).as<IDBRequest>();
}

IDBRequest IDBIndex::getAllKeys(const jsbind::Any& query, unsigned long count) {
    return emlite::Val::call("getAllKeys", query, count).as<IDBRequest>();
}

IDBRequest IDBIndex::count() {
    return emlite::Val::call("count").as<IDBRequest>();
}

IDBRequest IDBIndex::count(const jsbind::Any& query) {
    return emlite::Val::call("count", query).as<IDBRequest>();
}

IDBRequest IDBIndex::openCursor() {
    return emlite::Val::call("openCursor").as<IDBRequest>();
}

IDBRequest IDBIndex::openCursor(const jsbind::Any& query) {
    return emlite::Val::call("openCursor", query).as<IDBRequest>();
}

IDBRequest IDBIndex::openCursor(const jsbind::Any& query, const IDBCursorDirection& direction) {
    return emlite::Val::call("openCursor", query, direction).as<IDBRequest>();
}

IDBRequest IDBIndex::openKeyCursor() {
    return emlite::Val::call("openKeyCursor").as<IDBRequest>();
}

IDBRequest IDBIndex::openKeyCursor(const jsbind::Any& query) {
    return emlite::Val::call("openKeyCursor", query).as<IDBRequest>();
}

IDBRequest IDBIndex::openKeyCursor(const jsbind::Any& query, const IDBCursorDirection& direction) {
    return emlite::Val::call("openKeyCursor", query, direction).as<IDBRequest>();
}


} // namespace webbind