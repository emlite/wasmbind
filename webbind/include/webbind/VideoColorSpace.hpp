#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoColorSpaceInit.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface VideoColorSpace
/// [`VideoColorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace)
class VideoColorSpace : public emlite::Val {
    explicit VideoColorSpace(Handle h) noexcept;
public:
    explicit VideoColorSpace(const emlite::Val &val) noexcept;
    static VideoColorSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoColorSpace clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new VideoColorSpace(..)` constructor, creating a new VideoColorSpace instance
    VideoColorSpace();
    /// The `new VideoColorSpace(..)` constructor, creating a new VideoColorSpace instance
    VideoColorSpace(const VideoColorSpaceInit& init);
    /// Getter of the `primaries` attribute.
    /// [`VideoColorSpace.primaries`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace/primaries)
    [[nodiscard]] VideoColorPrimaries primaries() const;
    /// Getter of the `transfer` attribute.
    /// [`VideoColorSpace.transfer`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace/transfer)
    [[nodiscard]] VideoTransferCharacteristics transfer() const;
    /// Getter of the `matrix` attribute.
    /// [`VideoColorSpace.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace/matrix)
    [[nodiscard]] VideoMatrixCoefficients matrix() const;
    /// Getter of the `fullRange` attribute.
    /// [`VideoColorSpace.fullRange`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace/fullRange)
    [[nodiscard]] bool fullRange() const;
    /// The toJSON method.
    /// [`VideoColorSpace.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorSpace/toJSON)
    VideoColorSpaceInit toJSON();
};

} // namespace webbind