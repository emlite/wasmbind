#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MediaKeysPolicy
/// [`MediaKeysPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeysPolicy)
class MediaKeysPolicy : public emlite::Val {
  explicit MediaKeysPolicy(Handle h) noexcept;
public:
    static MediaKeysPolicy take_ownership(Handle h) noexcept;
    explicit MediaKeysPolicy(const emlite::Val &val) noexcept;
    MediaKeysPolicy() noexcept;
    [[nodiscard]] MediaKeysPolicy clone() const noexcept;
    [[nodiscard]] jsbind::String minHdcpVersion() const;
    void minHdcpVersion(const jsbind::String& value);
};

} // namespace webbind