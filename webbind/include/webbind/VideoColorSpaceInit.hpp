#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoColorSpaceInit
/// [`VideoColorSpaceInit`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpaceInit)
class VideoColorSpaceInit : public emlite::Val {
  explicit VideoColorSpaceInit(Handle h) noexcept;
public:
    static VideoColorSpaceInit take_ownership(Handle h) noexcept;
    explicit VideoColorSpaceInit(const emlite::Val &val) noexcept;
    VideoColorSpaceInit() noexcept;
    [[nodiscard]] VideoColorSpaceInit clone() const noexcept;
    [[nodiscard]] VideoColorPrimaries primaries() const;
    void primaries(const VideoColorPrimaries& value);
    [[nodiscard]] VideoTransferCharacteristics transfer() const;
    void transfer(const VideoTransferCharacteristics& value);
    [[nodiscard]] VideoMatrixCoefficients matrix() const;
    void matrix(const VideoMatrixCoefficients& value);
    [[nodiscard]] bool fullRange() const;
    void fullRange(bool value);
};

} // namespace webbind