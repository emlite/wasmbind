#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaKeySystemMediaCapability
/// [`MediaKeySystemMediaCapability`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemMediaCapability)
class MediaKeySystemMediaCapability : public emlite::Val {
  explicit MediaKeySystemMediaCapability(Handle h) noexcept;
public:
    static MediaKeySystemMediaCapability take_ownership(Handle h) noexcept;
    explicit MediaKeySystemMediaCapability(const emlite::Val &val) noexcept;
    MediaKeySystemMediaCapability() noexcept;
    [[nodiscard]] MediaKeySystemMediaCapability clone() const noexcept;
    [[nodiscard]] jsbind::String contentType() const;
    void contentType(const jsbind::String& value);
    [[nodiscard]] jsbind::String encryptionScheme() const;
    void encryptionScheme(const jsbind::String& value);
    [[nodiscard]] jsbind::String robustness() const;
    void robustness(const jsbind::String& value);
};

} // namespace webbind