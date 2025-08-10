#include <webbind/NDEFRecord.hpp>
#include <webbind/NDEFRecordInit.hpp>
#include <webbind/NDEFRecord.hpp>

namespace webbind {

NDEFRecord NDEFRecord::take_ownership(Handle h) noexcept {
    return NDEFRecord(h);
}

NDEFRecord NDEFRecord::clone() const noexcept { return *this; }

emlite::Val NDEFRecord::instance() noexcept { return emlite::Val::global("NDEFRecord"); }

NDEFRecord::NDEFRecord(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NDEFRecord::NDEFRecord(const emlite::Val &val) noexcept: emlite::Val(val) {}

NDEFRecord::NDEFRecord(const NDEFRecordInit& recordInit) : emlite::Val(emlite::Val::global("NDEFRecord").new_(recordInit)) {}

jsbind::String NDEFRecord::recordType() const {
    return emlite::Val::get("recordType").as<jsbind::String>();
}

jsbind::String NDEFRecord::mediaType() const {
    return emlite::Val::get("mediaType").as<jsbind::String>();
}

jsbind::String NDEFRecord::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

jsbind::DataView NDEFRecord::data() const {
    return emlite::Val::get("data").as<jsbind::DataView>();
}

jsbind::String NDEFRecord::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::String>();
}

jsbind::String NDEFRecord::lang() const {
    return emlite::Val::get("lang").as<jsbind::String>();
}

jsbind::TypedArray<NDEFRecord> NDEFRecord::toRecords() {
    return emlite::Val::call("toRecords").as<jsbind::TypedArray<NDEFRecord>>();
}


} // namespace webbind