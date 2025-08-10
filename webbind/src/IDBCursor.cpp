#include <webbind/IDBCursor.hpp>
#include <webbind/IDBRequest.hpp>

namespace webbind {

IDBCursor IDBCursor::take_ownership(Handle h) noexcept {
        return IDBCursor(h);
    }
IDBCursor IDBCursor::clone() const noexcept { return *this; }
emlite::Val IDBCursor::instance() noexcept { return emlite::Val::global("IDBCursor"); }
IDBCursor::IDBCursor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBCursor::IDBCursor(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any IDBCursor::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

IDBCursorDirection IDBCursor::direction() const {
    return emlite::Val::get("direction").as<IDBCursorDirection>();
}

jsbind::Any IDBCursor::key() const {
    return emlite::Val::get("key").as<jsbind::Any>();
}

jsbind::Any IDBCursor::primaryKey() const {
    return emlite::Val::get("primaryKey").as<jsbind::Any>();
}

IDBRequest IDBCursor::request() const {
    return emlite::Val::get("request").as<IDBRequest>();
}

jsbind::Undefined IDBCursor::advance(unsigned long count) {
    return emlite::Val::call("advance", count).as<jsbind::Undefined>();
}

jsbind::Undefined IDBCursor::continue_() {
    return emlite::Val::call("continue").as<jsbind::Undefined>();
}

jsbind::Undefined IDBCursor::continue_(const jsbind::Any& key) {
    return emlite::Val::call("continue", key).as<jsbind::Undefined>();
}

jsbind::Undefined IDBCursor::continuePrimaryKey(const jsbind::Any& key, const jsbind::Any& primaryKey) {
    return emlite::Val::call("continuePrimaryKey", key, primaryKey).as<jsbind::Undefined>();
}

IDBRequest IDBCursor::update(const jsbind::Any& value) {
    return emlite::Val::call("update", value).as<IDBRequest>();
}

IDBRequest IDBCursor::delete_() {
    return emlite::Val::call("delete").as<IDBRequest>();
}


} // namespace webbind