#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaCapabilitiesInfo
class MediaCapabilitiesInfo : public emlite::Val {
  explicit MediaCapabilitiesInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesInfo() noexcept;
    [[nodiscard]] MediaCapabilitiesInfo clone() const noexcept;
    /// Getter of the `supported` attribute.
    [[nodiscard]] bool supported() const;
    /// Setter of the `supported` attribute.
    void supported(bool value);
    /// Getter of the `smooth` attribute.
    [[nodiscard]] bool smooth() const;
    /// Setter of the `smooth` attribute.
    void smooth(bool value);
    /// Getter of the `powerEfficient` attribute.
    [[nodiscard]] bool powerEfficient() const;
    /// Setter of the `powerEfficient` attribute.
    void powerEfficient(bool value);
};

} // namespace webbind