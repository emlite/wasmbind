#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeySystemTrackConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaCapabilitiesKeySystemConfiguration
class MediaCapabilitiesKeySystemConfiguration : public emlite::Val {
  explicit MediaCapabilitiesKeySystemConfiguration(Handle h) noexcept;
public:
    static MediaCapabilitiesKeySystemConfiguration take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesKeySystemConfiguration(const emlite::Val &val) noexcept;
    MediaCapabilitiesKeySystemConfiguration() noexcept;
    [[nodiscard]] MediaCapabilitiesKeySystemConfiguration clone() const noexcept;
    /// Getter of the `keySystem` attribute.
    [[nodiscard]] jsbind::String keySystem() const;
    /// Setter of the `keySystem` attribute.
    void keySystem(const jsbind::String& value);
    /// Getter of the `initDataType` attribute.
    [[nodiscard]] jsbind::String initDataType() const;
    /// Setter of the `initDataType` attribute.
    void initDataType(const jsbind::String& value);
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
    /// Getter of the `audio` attribute.
    [[nodiscard]] KeySystemTrackConfiguration audio() const;
    /// Setter of the `audio` attribute.
    void audio(const KeySystemTrackConfiguration& value);
    /// Getter of the `video` attribute.
    [[nodiscard]] KeySystemTrackConfiguration video() const;
    /// Setter of the `video` attribute.
    void video(const KeySystemTrackConfiguration& value);
};

} // namespace webbind