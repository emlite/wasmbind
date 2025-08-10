#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageEncodeOptions
class ImageEncodeOptions : public emlite::Val {
  explicit ImageEncodeOptions(Handle h) noexcept;
public:
    static ImageEncodeOptions take_ownership(Handle h) noexcept;
    explicit ImageEncodeOptions(const emlite::Val &val) noexcept;
    ImageEncodeOptions() noexcept;
    [[nodiscard]] ImageEncodeOptions clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `quality` attribute.
    [[nodiscard]] double quality() const;
    /// Setter of the `quality` attribute.
    void quality(double value);
};

} // namespace webbind