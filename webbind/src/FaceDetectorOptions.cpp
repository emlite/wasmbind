#include <webbind/FaceDetectorOptions.hpp>

using emlite::Val;
namespace webbind {

FaceDetectorOptions::FaceDetectorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FaceDetectorOptions FaceDetectorOptions::take_ownership(Handle h) noexcept {
        return FaceDetectorOptions(h);
    }
FaceDetectorOptions::FaceDetectorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
FaceDetectorOptions::FaceDetectorOptions() noexcept: emlite::Val(emlite::Val::object()) {}
FaceDetectorOptions FaceDetectorOptions::clone() const noexcept { return *this; }

unsigned short FaceDetectorOptions::maxDetectedFaces() const {
    return emlite::Val::get("maxDetectedFaces").as<unsigned short>();
}

void FaceDetectorOptions::maxDetectedFaces(unsigned short value) {
    emlite::Val::set("maxDetectedFaces", value);
}

bool FaceDetectorOptions::fastMode() const {
    return emlite::Val::get("fastMode").as<bool>();
}

void FaceDetectorOptions::fastMode(bool value) {
    emlite::Val::set("fastMode", value);
}


} // namespace webbind