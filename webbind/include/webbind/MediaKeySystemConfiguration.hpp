#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaKeySystemMediaCapability.hpp"

namespace webbind {

/// Dictionary type MediaKeySystemConfiguration
/// [`MediaKeySystemConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemConfiguration)
class MediaKeySystemConfiguration : public emlite::Val {
  explicit MediaKeySystemConfiguration(Handle h) noexcept;
public:
    static MediaKeySystemConfiguration take_ownership(Handle h) noexcept;
    explicit MediaKeySystemConfiguration(const emlite::Val &val) noexcept;
    MediaKeySystemConfiguration() noexcept;
    [[nodiscard]] MediaKeySystemConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> initDataTypes() const;
    void initDataTypes(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<MediaKeySystemMediaCapability> audioCapabilities() const;
    void audioCapabilities(const jsbind::TypedArray<MediaKeySystemMediaCapability>& value);
    [[nodiscard]] jsbind::TypedArray<MediaKeySystemMediaCapability> videoCapabilities() const;
    void videoCapabilities(const jsbind::TypedArray<MediaKeySystemMediaCapability>& value);
    [[nodiscard]] MediaKeysRequirement distinctiveIdentifier() const;
    void distinctiveIdentifier(const MediaKeysRequirement& value);
    [[nodiscard]] MediaKeysRequirement persistentState() const;
    void persistentState(const MediaKeysRequirement& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> sessionTypes() const;
    void sessionTypes(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind