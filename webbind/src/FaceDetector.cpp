#include "webbind/FaceDetector.hpp"
#include "webbind/FaceDetectorOptions.hpp"
#include "webbind/DetectedFace.hpp"

namespace webbind {

FaceDetector FaceDetector::take_ownership(Handle h) noexcept {
        return FaceDetector(h);
    }
FaceDetector FaceDetector::clone() const noexcept { return *this; }
emlite::Val FaceDetector::instance() noexcept { return emlite::Val::global("FaceDetector"); }
FaceDetector::FaceDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FaceDetector::FaceDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}

FaceDetector::FaceDetector() : emlite::Val(emlite::Val::global("FaceDetector").new_()) {}

FaceDetector::FaceDetector(const FaceDetectorOptions& faceDetectorOptions) : emlite::Val(emlite::Val::global("FaceDetector").new_(faceDetectorOptions)) {}

jsbind::Promise<jsbind::TypedArray<DetectedFace>> FaceDetector::detect(const jsbind::Any& image) {
    return emlite::Val::call("detect", image).as<jsbind::Promise<jsbind::TypedArray<DetectedFace>>>();
}


} // namespace webbind