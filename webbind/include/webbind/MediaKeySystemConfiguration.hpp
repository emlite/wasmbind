#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaKeySystemMediaCapability.hpp"

namespace webbind {

/// Dictionary type MediaKeySystemConfiguration
class MediaKeySystemConfiguration : public emlite::Val {
  explicit MediaKeySystemConfiguration(Handle h) noexcept;
public:
    static MediaKeySystemConfiguration take_ownership(Handle h) noexcept;
    explicit MediaKeySystemConfiguration(const emlite::Val &val) noexcept;
    MediaKeySystemConfiguration() noexcept;
    [[nodiscard]] MediaKeySystemConfiguration clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
    /// Getter of the `initDataTypes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> initDataTypes() const;
    /// Setter of the `initDataTypes` attribute.
    void initDataTypes(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `audioCapabilities` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaKeySystemMediaCapability> audioCapabilities() const;
    /// Setter of the `audioCapabilities` attribute.
    void audioCapabilities(const jsbind::TypedArray<MediaKeySystemMediaCapability>& value);
    /// Getter of the `videoCapabilities` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaKeySystemMediaCapability> videoCapabilities() const;
    /// Setter of the `videoCapabilities` attribute.
    void videoCapabilities(const jsbind::TypedArray<MediaKeySystemMediaCapability>& value);
    /// Getter of the `distinctiveIdentifier` attribute.
    [[nodiscard]] MediaKeysRequirement distinctiveIdentifier() const;
    /// Setter of the `distinctiveIdentifier` attribute.
    void distinctiveIdentifier(const MediaKeysRequirement& value);
    /// Getter of the `persistentState` attribute.
    [[nodiscard]] MediaKeysRequirement persistentState() const;
    /// Setter of the `persistentState` attribute.
    void persistentState(const MediaKeysRequirement& value);
    /// Getter of the `sessionTypes` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> sessionTypes() const;
    /// Setter of the `sessionTypes` attribute.
    void sessionTypes(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind