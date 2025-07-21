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
    MediaCapabilitiesDecodingInfo clone() const noexcept;
    MediaKeySystemAccess keySystemAccess() const;
    void keySystemAccess(const MediaKeySystemAccess& value);
    MediaDecodingConfiguration configuration() const;
    void configuration(const MediaDecodingConfiguration& value);
};

class MediaDecodingConfiguration : public emlite::Val {
  explicit MediaDecodingConfiguration(Handle h) noexcept;
public:
    static MediaDecodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaDecodingConfiguration(const emlite::Val &val) noexcept;
    MediaDecodingConfiguration() noexcept;
    MediaDecodingConfiguration clone() const noexcept;
    MediaDecodingType type() const;
    void type(const MediaDecodingType& value);
    jsbind::Any keySystemConfiguration() const;
    void keySystemConfiguration(const jsbind::Any& value);
};

class MediaCapabilitiesEncodingInfo : public emlite::Val {
  explicit MediaCapabilitiesEncodingInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesEncodingInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesEncodingInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesEncodingInfo() noexcept;
    MediaCapabilitiesEncodingInfo clone() const noexcept;
    MediaEncodingConfiguration configuration() const;
    void configuration(const MediaEncodingConfiguration& value);
};

class MediaEncodingConfiguration : public emlite::Val {
  explicit MediaEncodingConfiguration(Handle h) noexcept;
public:
    static MediaEncodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaEncodingConfiguration(const emlite::Val &val) noexcept;
    MediaEncodingConfiguration() noexcept;
    MediaEncodingConfiguration clone() const noexcept;
    MediaEncodingType type() const;
    void type(const MediaEncodingType& value);
};

class MediaCapabilities : public emlite::Val {
    explicit MediaCapabilities(Handle h) noexcept;

public:
    explicit MediaCapabilities(const emlite::Val &val) noexcept;
    static MediaCapabilities take_ownership(Handle h) noexcept;

    MediaCapabilities clone() const noexcept;
    jsbind::Promise<MediaCapabilitiesDecodingInfo> decodingInfo(const MediaDecodingConfiguration& configuration);
    jsbind::Promise<MediaCapabilitiesEncodingInfo> encodingInfo(const MediaEncodingConfiguration& configuration);
};

