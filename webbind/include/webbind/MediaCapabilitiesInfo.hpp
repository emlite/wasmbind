#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaCapabilitiesInfo
/// [`MediaCapabilitiesInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MediaCapabilitiesInfo)
class MediaCapabilitiesInfo : public emlite::Val {
  explicit MediaCapabilitiesInfo(Handle h) noexcept;
public:
    static MediaCapabilitiesInfo take_ownership(Handle h) noexcept;
    explicit MediaCapabilitiesInfo(const emlite::Val &val) noexcept;
    MediaCapabilitiesInfo() noexcept;
    [[nodiscard]] MediaCapabilitiesInfo clone() const noexcept;
    [[nodiscard]] bool supported() const;
    void supported(bool value);
    [[nodiscard]] bool smooth() const;
    void smooth(bool value);
    [[nodiscard]] bool powerEfficient() const;
    void powerEfficient(bool value);
};

} // namespace webbind