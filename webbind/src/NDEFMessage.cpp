#include <webbind/NDEFMessage.hpp>
#include <webbind/NDEFRecord.hpp>


NDEFMessage NDEFMessage::take_ownership(Handle h) noexcept {
        return NDEFMessage(h);
    }
NDEFMessage NDEFMessage::clone() const noexcept { return *this; }
emlite::Val NDEFMessage::instance() noexcept { return emlite::Val::global("NDEFMessage"); }
NDEFMessage::NDEFMessage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NDEFMessage::NDEFMessage(const emlite::Val &val) noexcept: emlite::Val(val) {}


NDEFMessage::NDEFMessage(const jsbind::Any& messageInit) : emlite::Val(emlite::Val::global("NDEFMessage").new_(messageInit)) {}

jsbind::TypedArray<NDEFRecord> NDEFMessage::records() const {
    return emlite::Val::get("records").as<jsbind::TypedArray<NDEFRecord>>();
}

