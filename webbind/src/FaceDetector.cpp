#include <webbind/FaceDetector.hpp>
#include <webbind/DOMRectReadOnly.hpp>


DetectedFace::DetectedFace(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DetectedFace DetectedFace::take_ownership(Handle h) noexcept {
        return DetectedFace(h);
    }
DetectedFace::DetectedFace(const emlite::Val &val) noexcept: emlite::Val(val) {}
DetectedFace::DetectedFace() noexcept: emlite::Val(emlite::Val::object()) {}
DetectedFace DetectedFace::clone() const noexcept { return *this; }

DOMRectReadOnly DetectedFace::boundingBox() const {
    return emlite::Val::get("boundingBox").as<DOMRectReadOnly>();
}

void DetectedFace::boundingBox(const DOMRectReadOnly& value) {
    emlite::Val::set("boundingBox", value);
}

jsbind::Sequence<jsbind::Any> DetectedFace::landmarks() const {
    return emlite::Val::get("landmarks").as<jsbind::Sequence<jsbind::Any>>();
}

void DetectedFace::landmarks(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("landmarks", value);
}

FaceDetector FaceDetector::take_ownership(Handle h) noexcept {
        return FaceDetector(h);
    }
FaceDetector FaceDetector::clone() const noexcept { return *this; }
FaceDetector::FaceDetector(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FaceDetector::FaceDetector(const emlite::Val &val) noexcept: emlite::Val(val) {}


FaceDetector::FaceDetector() : emlite::Val(emlite::Val::global("FaceDetector").new_()) {}

FaceDetector::FaceDetector(const jsbind::Any& faceDetectorOptions) : emlite::Val(emlite::Val::global("FaceDetector").new_(faceDetectorOptions)) {}

jsbind::Promise<jsbind::Sequence<DetectedFace>> FaceDetector::detect(const jsbind::Any& image) {
    return emlite::Val::call("detect", image).as<jsbind::Promise<jsbind::Sequence<DetectedFace>>>();
}

