#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type KeySystemTrackConfiguration
class KeySystemTrackConfiguration : public emlite::Val {
  explicit KeySystemTrackConfiguration(Handle h) noexcept;
public:
    static KeySystemTrackConfiguration take_ownership(Handle h) noexcept;
    explicit KeySystemTrackConfiguration(const emlite::Val &val) noexcept;
    KeySystemTrackConfiguration() noexcept;
    [[nodiscard]] KeySystemTrackConfiguration clone() const noexcept;
    /// Getter of the `robustness` attribute.
    [[nodiscard]] jsbind::String robustness() const;
    /// Setter of the `robustness` attribute.
    void robustness(const jsbind::String& value);
    /// Getter of the `encryptionScheme` attribute.
    [[nodiscard]] jsbind::String encryptionScheme() const;
    /// Setter of the `encryptionScheme` attribute.
    void encryptionScheme(const jsbind::String& value);
};

} // namespace webbind