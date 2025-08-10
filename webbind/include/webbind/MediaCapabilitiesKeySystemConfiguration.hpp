#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "KeySystemTrackConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaCapabilitiesKeySystemConfiguration
/// [`MediaCapabilitiesKeySystemConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilitiesKeySystemConfiguration)
class MediaCapabilitiesKeySystemConfiguration : public emlite::Val {
  explicit MediaCapabilitiesKeySystemConfiguration(Handle h) noexcept;
public:
    static MediaCapabilitiesKeySystemConfiguration take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesKeySystemConfiguration(const emlite::Val &val) noexcept;
    MediaCapabilitiesKeySystemConfiguration() noexcept;
    [[nodiscard]] MediaCapabilitiesKeySystemConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String keySystem() const;
    void keySystem(const jsbind::String& value);
    [[nodiscard]] jsbind::String initDataType() const;
    void initDataType(const jsbind::String& value);
    [[nodiscard]] MediaKeysRequirement distinctiveIdentifier() const;
    void distinctiveIdentifier(const MediaKeysRequirement& value);
    [[nodiscard]] MediaKeysRequirement persistentState() const;
    void persistentState(const MediaKeysRequirement& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> sessionTypes() const;
    void sessionTypes(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] KeySystemTrackConfiguration audio() const;
    void audio(const KeySystemTrackConfiguration& value);
    [[nodiscard]] KeySystemTrackConfiguration video() const;
    void video(const KeySystemTrackConfiguration& value);
};

} // namespace webbind