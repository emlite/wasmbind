#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaKeySystemMediaCapability
class MediaKeySystemMediaCapability : public emlite::Val {
  explicit MediaKeySystemMediaCapability(Handle h) noexcept;
public:
    static MediaKeySystemMediaCapability take_ownership(Handle h) noexcept;
    explicit MediaKeySystemMediaCapability(const emlite::Val &val) noexcept;
    MediaKeySystemMediaCapability() noexcept;
    [[nodiscard]] MediaKeySystemMediaCapability clone() const noexcept;
    /// Getter of the `contentType` attribute.
    [[nodiscard]] jsbind::String contentType() const;
    /// Setter of the `contentType` attribute.
    void contentType(const jsbind::String& value);
    /// Getter of the `encryptionScheme` attribute.
    [[nodiscard]] jsbind::String encryptionScheme() const;
    /// Setter of the `encryptionScheme` attribute.
    void encryptionScheme(const jsbind::String& value);
    /// Getter of the `robustness` attribute.
    [[nodiscard]] jsbind::String robustness() const;
    /// Setter of the `robustness` attribute.
    void robustness(const jsbind::String& value);
};

} // namespace webbind