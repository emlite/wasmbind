#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Navigator.hpp"
#include "enums.hpp"

class MediaKeys;


/// The MediaKeySystemAccess class.
/// [`MediaKeySystemAccess`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemAccess)
class MediaKeySystemAccess : public emlite::Val {
    explicit MediaKeySystemAccess(Handle h) noexcept;

public:
    explicit MediaKeySystemAccess(const emlite::Val &val) noexcept;
    static MediaKeySystemAccess take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaKeySystemAccess clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `keySystem` attribute.
    /// [`MediaKeySystemAccess.keySystem`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemAccess/keySystem)
    [[nodiscard]] jsbind::String keySystem() const;
    /// The getConfiguration method.
    /// [`MediaKeySystemAccess.getConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemAccess/getConfiguration)
    MediaKeySystemConfiguration getConfiguration();
    /// The createMediaKeys method.
    /// [`MediaKeySystemAccess.createMediaKeys`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySystemAccess/createMediaKeys)
    jsbind::Promise<MediaKeys> createMediaKeys();
};

