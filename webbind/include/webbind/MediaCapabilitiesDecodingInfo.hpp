#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaCapabilitiesInfo.hpp"

namespace webbind {

class MediaKeySystemAccess;
class MediaDecodingConfiguration;

/// Dictionary type MediaCapabilitiesDecodingInfo
class MediaCapabilitiesDecodingInfo : public MediaCapabilitiesInfo {
  explicit MediaCapabilitiesDecodingInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesDecodingInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesDecodingInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesDecodingInfo() noexcept;
    [[nodiscard]] MediaCapabilitiesDecodingInfo clone() const noexcept;
    /// Getter of the `keySystemAccess` attribute.
    [[nodiscard]] MediaKeySystemAccess keySystemAccess() const;
    /// Setter of the `keySystemAccess` attribute.
    void keySystemAccess(const MediaKeySystemAccess& value);
    /// Getter of the `configuration` attribute.
    [[nodiscard]] MediaDecodingConfiguration configuration() const;
    /// Setter of the `configuration` attribute.
    void configuration(const MediaDecodingConfiguration& value);
};

} // namespace webbind