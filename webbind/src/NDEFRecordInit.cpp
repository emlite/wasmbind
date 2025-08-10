#include <webbind/NDEFRecordInit.hpp>

namespace webbind {

NDEFRecordInit::NDEFRecordInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFRecordInit NDEFRecordInit::take_ownership(Handle h) noexcept {
    return NDEFRecordInit(h);
}

NDEFRecordInit::NDEFRecordInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

NDEFRecordInit::NDEFRecordInit() noexcept: emlite::Val(emlite::Val::object()) {}

NDEFRecordInit NDEFRecordInit::clone() const noexcept { return *this; }

jsbind::String NDEFRecordInit::recordType() const {
    return emlite::Val::get("recordType").as<jsbind::String>();
}

void NDEFRecordInit::recordType(const jsbind::String& value) {
    emlite::Val::set("recordType", value);
}

jsbind::String NDEFRecordInit::mediaType() const {
    return emlite::Val::get("mediaType").as<jsbind::String>();
}

void NDEFRecordInit::mediaType(const jsbind::String& value) {
    emlite::Val::set("mediaType", value);
}

jsbind::String NDEFRecordInit::id() const {
    return emlite::Val::get("id").as<jsbind::String>();
}

void NDEFRecordInit::id(const jsbind::String& value) {
    emlite::Val::set("id", value);
}

jsbind::String NDEFRecordInit::encoding() const {
    return emlite::Val::get("encoding").as<jsbind::String>();
}

void NDEFRecordInit::encoding(const jsbind::String& value) {
    emlite::Val::set("encoding", value);
}

jsbind::String NDEFRecordInit::lang() const {
    return emlite::Val::get("lang").as<jsbind::String>();
}

void NDEFRecordInit::lang(const jsbind::String& value) {
    emlite::Val::set("lang", value);
}

jsbind::Any NDEFRecordInit::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void NDEFRecordInit::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind