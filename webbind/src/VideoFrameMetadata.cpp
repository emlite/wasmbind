#include <webbind/VideoFrameMetadata.hpp>

using emlite::Val;
namespace webbind {

VideoFrameMetadata::VideoFrameMetadata(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoFrameMetadata VideoFrameMetadata::take_ownership(Handle h) noexcept {
        return VideoFrameMetadata(h);
    }
VideoFrameMetadata::VideoFrameMetadata(const emlite::Val &val) noexcept: emlite::Val(val) {}
VideoFrameMetadata::VideoFrameMetadata() noexcept: emlite::Val(emlite::Val::object()) {}
VideoFrameMetadata VideoFrameMetadata::clone() const noexcept { return *this; }


} // namespace webbind