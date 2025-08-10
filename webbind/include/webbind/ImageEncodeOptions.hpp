#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageEncodeOptions
/// [`ImageEncodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ImageEncodeOptions)
class ImageEncodeOptions : public emlite::Val {
  explicit ImageEncodeOptions(Handle h) noexcept;
public:
    static ImageEncodeOptions take_ownership(Handle h) noexcept;
    explicit ImageEncodeOptions(const emlite::Val &val) noexcept;
    ImageEncodeOptions() noexcept;
    [[nodiscard]] ImageEncodeOptions clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] double quality() const;
    void quality(double value);
};

} // namespace webbind