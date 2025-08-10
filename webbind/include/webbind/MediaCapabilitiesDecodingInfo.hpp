#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaCapabilitiesInfo.hpp"
#include "MediaDecodingConfiguration.hpp"

namespace webbind {

class MediaKeySystemAccess;

/// Dictionary type MediaCapabilitiesDecodingInfo
/// [`MediaCapabilitiesDecodingInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilitiesDecodingInfo)
class MediaCapabilitiesDecodingInfo : public MediaCapabilitiesInfo {
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

} // namespace webbind