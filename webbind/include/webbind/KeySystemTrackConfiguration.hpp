#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type KeySystemTrackConfiguration
/// [`KeySystemTrackConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/KeySystemTrackConfiguration)
class KeySystemTrackConfiguration : public emlite::Val {
  explicit KeySystemTrackConfiguration(Handle h) noexcept;
public:
    static KeySystemTrackConfiguration take_ownership(Handle h) noexcept;
    explicit KeySystemTrackConfiguration(const emlite::Val &val) noexcept;
    KeySystemTrackConfiguration() noexcept;
    [[nodiscard]] KeySystemTrackConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String robustness() const;
    void robustness(const jsbind::String& value);
    [[nodiscard]] jsbind::String encryptionScheme() const;
    void encryptionScheme(const jsbind::String& value);
};

} // namespace webbind