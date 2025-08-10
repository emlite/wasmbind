#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaImage
class MediaImage : public emlite::Val {
  explicit MediaImage(Handle h) noexcept;
public:
    static MediaImage take_ownership(Handle h) noexcept;
    explicit MediaImage(const emlite::Val &val) noexcept;
    MediaImage() noexcept;
    [[nodiscard]] MediaImage clone() const noexcept;
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
};

} // namespace webbind