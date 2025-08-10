#include <webbind/DetectedFace.hpp>
#include <webbind/DOMRectReadOnly.hpp>
#include <webbind/Landmark.hpp>

namespace webbind {

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

jsbind::TypedArray<Landmark> DetectedFace::landmarks() const {
    return emlite::Val::get("landmarks").as<jsbind::TypedArray<Landmark>>();
}

void DetectedFace::landmarks(const jsbind::TypedArray<Landmark>& value) {
    emlite::Val::set("landmarks", value);
}


} // namespace webbind