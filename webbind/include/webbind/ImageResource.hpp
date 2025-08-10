#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageResource
class ImageResource : public emlite::Val {
  explicit ImageResource(Handle h) noexcept;
public:
    static ImageResource take_ownership(Handle h) noexcept;
    explicit ImageResource(const emlite::Val &val) noexcept;
    ImageResource() noexcept;
    [[nodiscard]] ImageResource clone() const noexcept;
    /// Getter of the `src` attribute.
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    void src(const jsbind::String& value);
    /// Getter of the `sizes` attribute.
    [[nodiscard]] jsbind::String sizes() const;
    /// Setter of the `sizes` attribute.
    void sizes(const jsbind::String& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
};

} // namespace webbind