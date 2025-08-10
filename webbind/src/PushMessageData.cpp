#include <webbind/PushMessageData.hpp>
#include <webbind/Blob.hpp>

namespace webbind {

PushMessageData PushMessageData::take_ownership(Handle h) noexcept {
        return PushMessageData(h);
    }
PushMessageData PushMessageData::clone() const noexcept { return *this; }
emlite::Val PushMessageData::instance() noexcept { return emlite::Val::global("PushMessageData"); }
PushMessageData::PushMessageData(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PushMessageData::PushMessageData(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::ArrayBuffer PushMessageData::arrayBuffer() {
    return emlite::Val::call("arrayBuffer").as<jsbind::ArrayBuffer>();
}

Blob PushMessageData::blob() {
    return emlite::Val::call("blob").as<Blob>();
}

jsbind::Uint8Array PushMessageData::bytes() {
    return emlite::Val::call("bytes").as<jsbind::Uint8Array>();
}

jsbind::Any PushMessageData::json() {
    return emlite::Val::call("json").as<jsbind::Any>();
}

jsbind::String PushMessageData::text() {
    return emlite::Val::call("text").as<jsbind::String>();
}


} // namespace webbind