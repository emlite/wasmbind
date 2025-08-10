#include <webbind/StorageAccessTypes.hpp>

namespace webbind {

StorageAccessTypes::StorageAccessTypes(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
StorageAccessTypes StorageAccessTypes::take_ownership(Handle h) noexcept {
    return StorageAccessTypes(h);
}

StorageAccessTypes::StorageAccessTypes(const emlite::Val &val) noexcept: emlite::Val(val) {}

StorageAccessTypes::StorageAccessTypes() noexcept: emlite::Val(emlite::Val::object()) {}

StorageAccessTypes StorageAccessTypes::clone() const noexcept { return *this; }

bool StorageAccessTypes::all() const {
    return emlite::Val::get("all").as<bool>();
}

void StorageAccessTypes::all(bool value) {
    emlite::Val::set("all", value);
}

bool StorageAccessTypes::cookies() const {
    return emlite::Val::get("cookies").as<bool>();
}

void StorageAccessTypes::cookies(bool value) {
    emlite::Val::set("cookies", value);
}

bool StorageAccessTypes::sessionStorage() const {
    return emlite::Val::get("sessionStorage").as<bool>();
}

void StorageAccessTypes::sessionStorage(bool value) {
    emlite::Val::set("sessionStorage", value);
}

bool StorageAccessTypes::localStorage() const {
    return emlite::Val::get("localStorage").as<bool>();
}

void StorageAccessTypes::localStorage(bool value) {
    emlite::Val::set("localStorage", value);
}

bool StorageAccessTypes::indexedDB() const {
    return emlite::Val::get("indexedDB").as<bool>();
}

void StorageAccessTypes::indexedDB(bool value) {
    emlite::Val::set("indexedDB", value);
}

bool StorageAccessTypes::locks() const {
    return emlite::Val::get("locks").as<bool>();
}

void StorageAccessTypes::locks(bool value) {
    emlite::Val::set("locks", value);
}

bool StorageAccessTypes::caches() const {
    return emlite::Val::get("caches").as<bool>();
}

void StorageAccessTypes::caches(bool value) {
    emlite::Val::set("caches", value);
}

bool StorageAccessTypes::getDirectory() const {
    return emlite::Val::get("getDirectory").as<bool>();
}

void StorageAccessTypes::getDirectory(bool value) {
    emlite::Val::set("getDirectory", value);
}

bool StorageAccessTypes::estimate() const {
    return emlite::Val::get("estimate").as<bool>();
}

void StorageAccessTypes::estimate(bool value) {
    emlite::Val::set("estimate", value);
}

bool StorageAccessTypes::createObjectURL() const {
    return emlite::Val::get("createObjectURL").as<bool>();
}

void StorageAccessTypes::createObjectURL(bool value) {
    emlite::Val::set("createObjectURL", value);
}

bool StorageAccessTypes::revokeObjectURL() const {
    return emlite::Val::get("revokeObjectURL").as<bool>();
}

void StorageAccessTypes::revokeObjectURL(bool value) {
    emlite::Val::set("revokeObjectURL", value);
}

bool StorageAccessTypes::BroadcastChannel_() const {
    return emlite::Val::get("BroadcastChannel").as<bool>();
}

void StorageAccessTypes::BroadcastChannel_(bool value) {
    emlite::Val::set("BroadcastChannel", value);
}

bool StorageAccessTypes::SharedWorker_() const {
    return emlite::Val::get("SharedWorker").as<bool>();
}

void StorageAccessTypes::SharedWorker_(bool value) {
    emlite::Val::set("SharedWorker", value);
}


} // namespace webbind