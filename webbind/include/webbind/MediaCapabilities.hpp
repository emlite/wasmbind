#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaCapabilitiesDecodingInfo;
class MediaDecodingConfiguration;
class MediaCapabilitiesEncodingInfo;
class MediaEncodingConfiguration;

/// Interface MediaCapabilities
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

} // namespace webbind