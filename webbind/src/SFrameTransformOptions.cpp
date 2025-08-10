#include <webbind/SFrameTransformOptions.hpp>

using emlite::Val;
namespace webbind {

SFrameTransformOptions::SFrameTransformOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SFrameTransformOptions SFrameTransformOptions::take_ownership(Handle h) noexcept {
        return SFrameTransformOptions(h);
    }
SFrameTransformOptions::SFrameTransformOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SFrameTransformOptions::SFrameTransformOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SFrameTransformOptions SFrameTransformOptions::clone() const noexcept { return *this; }

SFrameTransformRole SFrameTransformOptions::role() const {
    return emlite::Val::get("role").as<SFrameTransformRole>();
}

void SFrameTransformOptions::role(const SFrameTransformRole& value) {
    emlite::Val::set("role", value);
}


} // namespace webbind