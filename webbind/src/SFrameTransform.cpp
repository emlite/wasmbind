#include <webbind/SFrameTransform.hpp>
#include <webbind/CryptoKey.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WritableStream.hpp>


SFrameTransform SFrameTransform::take_ownership(Handle h) noexcept {
        return SFrameTransform(h);
    }
SFrameTransform SFrameTransform::clone() const noexcept { return *this; }
emlite::Val SFrameTransform::instance() noexcept { return emlite::Val::global("SFrameTransform"); }
SFrameTransform::SFrameTransform(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
SFrameTransform::SFrameTransform(const emlite::Val &val) noexcept: EventTarget(val) {}


SFrameTransform::SFrameTransform() : EventTarget(emlite::Val::global("SFrameTransform").new_()) {}

SFrameTransform::SFrameTransform(const jsbind::Any& options) : EventTarget(emlite::Val::global("SFrameTransform").new_(options)) {}

jsbind::Promise<jsbind::Undefined> SFrameTransform::setEncryptionKey(const CryptoKey& key) {
    return EventTarget::call("setEncryptionKey", key).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> SFrameTransform::setEncryptionKey(const CryptoKey& key, const jsbind::Any& keyID) {
    return EventTarget::call("setEncryptionKey", key, keyID).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any SFrameTransform::onerror() const {
    return EventTarget::get("onerror").as<jsbind::Any>();
}

void SFrameTransform::onerror(const jsbind::Any& value) {
    EventTarget::set("onerror", value);
}

ReadableStream SFrameTransform::readable() const {
    return EventTarget::get("readable").as<ReadableStream>();
}

WritableStream SFrameTransform::writable() const {
    return EventTarget::get("writable").as<WritableStream>();
}

