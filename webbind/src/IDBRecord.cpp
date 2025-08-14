#include <webbind/IDBRecord.hpp>

namespace webbind {

IDBRecord IDBRecord::take_ownership(Handle h) noexcept {
    return IDBRecord(h);
}

IDBRecord IDBRecord::clone() const noexcept { return *this; }

emlite::Val IDBRecord::instance() noexcept { return emlite::Val::global("IDBRecord"); }

IDBRecord::IDBRecord(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

IDBRecord::IDBRecord(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any IDBRecord::key() const {
    return emlite::Val::get("key").as<jsbind::Any>();
}

jsbind::Any IDBRecord::primaryKey() const {
    return emlite::Val::get("primaryKey").as<jsbind::Any>();
}

jsbind::Any IDBRecord::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}


} // namespace webbind