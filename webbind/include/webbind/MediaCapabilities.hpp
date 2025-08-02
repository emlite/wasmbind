#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MediaCapabilitiesDecodingInfo;
class MediaDecodingConfiguration;
class MediaCapabilitiesEncodingInfo;
class MediaEncodingConfiguration;
class MediaKeySystemAccess;


class MediaCapabilitiesDecodingInfo : public emlite::Val {
  explicit MediaCapabilitiesDecodingInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesDecodingInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesDecodingInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesDecodingInfo() noexcept;
    [[nodiscard]] MediaCapabilitiesDecodingInfo clone() const noexcept;
    [[nodiscard]] MediaKeySystemAccess keySystemAccess() const;
    void keySystemAccess(const MediaKeySystemAccess& value);
    [[nodiscard]] MediaDecodingConfiguration configuration() const;
    void configuration(const MediaDecodingConfiguration& value);
};

class MediaDecodingConfiguration : public emlite::Val {
  explicit MediaDecodingConfiguration(Handle h) noexcept;
public:
    static MediaDecodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaDecodingConfiguration(const emlite::Val &val) noexcept;
    MediaDecodingConfiguration() noexcept;
    [[nodiscard]] MediaDecodingConfiguration clone() const noexcept;
    [[nodiscard]] MediaDecodingType type() const;
    void type(const MediaDecodingType& value);
    [[nodiscard]] jsbind::Any keySystemConfiguration() const;
    void keySystemConfiguration(const jsbind::Any& value);
};

class MediaCapabilitiesEncodingInfo : public emlite::Val {
  explicit MediaCapabilitiesEncodingInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesEncodingInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesEncodingInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesEncodingInfo() noexcept;
    [[nodiscard]] MediaCapabilitiesEncodingInfo clone() const noexcept;
    [[nodiscard]] MediaEncodingConfiguration configuration() const;
    void configuration(const MediaEncodingConfiguration& value);
};

class MediaEncodingConfiguration : public emlite::Val {
  explicit MediaEncodingConfiguration(Handle h) noexcept;
public:
    static MediaEncodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaEncodingConfiguration(const emlite::Val &val) noexcept;
    MediaEncodingConfiguration() noexcept;
    [[nodiscard]] MediaEncodingConfiguration clone() const noexcept;
    [[nodiscard]] MediaEncodingType type() const;
    void type(const MediaEncodingType& value);
};

/// The MediaCapabilities class.
/// [`MediaCapabilities`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilities)
class MediaCapabilities : public emlite::Val {
    explicit MediaCapabilities(Handle h) noexcept;

public:
    explicit MediaCapabilities(const emlite::Val &val) noexcept;
    static MediaCapabilities take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaCapabilities clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The decodingInfo method.
    /// [`MediaCapabilities.decodingInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilities/decodingInfo)
    jsbind::Promise<MediaCapabilitiesDecodingInfo> decodingInfo(const MediaDecodingConfiguration& configuration);
    /// The encodingInfo method.
    /// [`MediaCapabilities.encodingInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilities/encodingInfo)
    jsbind::Promise<MediaCapabilitiesEncodingInfo> encodingInfo(const MediaEncodingConfiguration& configuration);
};

