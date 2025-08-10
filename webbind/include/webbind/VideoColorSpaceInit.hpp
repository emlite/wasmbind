#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoColorSpaceInit
class VideoColorSpaceInit : public emlite::Val {
  explicit VideoColorSpaceInit(Handle h) noexcept;
public:
    static VideoColorSpaceInit take_ownership(Handle h) noexcept;
    explicit VideoColorSpaceInit(const emlite::Val &val) noexcept;
    VideoColorSpaceInit() noexcept;
    [[nodiscard]] VideoColorSpaceInit clone() const noexcept;
    /// Getter of the `primaries` attribute.
    [[nodiscard]] VideoColorPrimaries primaries() const;
    /// Setter of the `primaries` attribute.
    void primaries(const VideoColorPrimaries& value);
    /// Getter of the `transfer` attribute.
    [[nodiscard]] VideoTransferCharacteristics transfer() const;
    /// Setter of the `transfer` attribute.
    void transfer(const VideoTransferCharacteristics& value);
    /// Getter of the `matrix` attribute.
    [[nodiscard]] VideoMatrixCoefficients matrix() const;
    /// Setter of the `matrix` attribute.
    void matrix(const VideoMatrixCoefficients& value);
    /// Getter of the `fullRange` attribute.
    [[nodiscard]] bool fullRange() const;
    /// Setter of the `fullRange` attribute.
    void fullRange(bool value);
};

} // namespace webbind