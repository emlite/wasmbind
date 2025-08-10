#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaCapabilitiesInfo.hpp"
#include "MediaEncodingConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaCapabilitiesEncodingInfo
/// [`MediaCapabilitiesEncodingInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilitiesEncodingInfo)
class MediaCapabilitiesEncodingInfo : public MediaCapabilitiesInfo {
  explicit MediaCapabilitiesEncodingInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesEncodingInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesEncodingInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesEncodingInfo() noexcept;
    [[nodiscard]] MediaCapabilitiesEncodingInfo clone() const noexcept;
    [[nodiscard]] MediaEncodingConfiguration configuration() const;
    void configuration(const MediaEncodingConfiguration& value);
};

} // namespace webbind