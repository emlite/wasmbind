#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaStreamConstraints
/// [`MediaStreamConstraints`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamConstraints)
class MediaStreamConstraints : public emlite::Val {
  explicit MediaStreamConstraints(Handle h) noexcept;
public:
    static MediaStreamConstraints take_ownership(Handle h) noexcept;
    explicit MediaStreamConstraints(const emlite::Val &val) noexcept;
    MediaStreamConstraints() noexcept;
    [[nodiscard]] MediaStreamConstraints clone() const noexcept;
    [[nodiscard]] jsbind::String peerIdentity() const;
    void peerIdentity(const jsbind::String& value);
};

} // namespace webbind