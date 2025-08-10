#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SFrameTransformOptions
/// [`SFrameTransformOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformOptions)
class SFrameTransformOptions : public emlite::Val {
  explicit SFrameTransformOptions(Handle h) noexcept;
public:
    static SFrameTransformOptions take_ownership(Handle h) noexcept;
    explicit SFrameTransformOptions(const emlite::Val &val) noexcept;
    SFrameTransformOptions() noexcept;
    [[nodiscard]] SFrameTransformOptions clone() const noexcept;
    [[nodiscard]] SFrameTransformRole role() const;
    void role(const SFrameTransformRole& value);
};

} // namespace webbind