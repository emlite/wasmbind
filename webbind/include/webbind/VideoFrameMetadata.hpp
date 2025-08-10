#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoFrameMetadata
/// [`VideoFrameMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFrameMetadata)
class VideoFrameMetadata : public emlite::Val {
  explicit VideoFrameMetadata(Handle h) noexcept;
public:
    static VideoFrameMetadata take_ownership(Handle h) noexcept;
    explicit VideoFrameMetadata(const emlite::Val &val) noexcept;
    VideoFrameMetadata() noexcept;
    [[nodiscard]] VideoFrameMetadata clone() const noexcept;
};

} // namespace webbind