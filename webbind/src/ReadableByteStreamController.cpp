#include "webbind/ReadableByteStreamController.hpp"
#include "webbind/ReadableStreamBYOBRequest.hpp"

namespace webbind {

ReadableByteStreamController ReadableByteStreamController::take_ownership(Handle h) noexcept {
        return ReadableByteStreamController(h);
    }
ReadableByteStreamController ReadableByteStreamController::clone() const noexcept { return *this; }
emlite::Val ReadableByteStreamController::instance() noexcept { return emlite::Val::global("ReadableByteStreamController"); }
ReadableByteStreamController::ReadableByteStreamController(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ReadableByteStreamController::ReadableByteStreamController(const emlite::Val &val) noexcept: emlite::Val(val) {}

ReadableStreamBYOBRequest ReadableByteStreamController::byobRequest() const {
    return emlite::Val::get("byobRequest").as<ReadableStreamBYOBRequest>();
}

double ReadableByteStreamController::desiredSize() const {
    return emlite::Val::get("desiredSize").as<double>();
}

jsbind::Undefined ReadableByteStreamController::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined ReadableByteStreamController::enqueue(const jsbind::Any& chunk) {
    return emlite::Val::call("enqueue", chunk).as<jsbind::Undefined>();
}

jsbind::Undefined ReadableByteStreamController::error() {
    return emlite::Val::call("error").as<jsbind::Undefined>();
}

jsbind::Undefined ReadableByteStreamController::error(const jsbind::Any& e) {
    return emlite::Val::call("error", e).as<jsbind::Undefined>();
}


} // namespace webbind