#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaKeysPolicy.hpp"
#include "enums.hpp"

namespace webbind {

class MediaKeySession;

/// Interface MediaKeys
/// [`MediaKeys`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys)
class MediaKeys : public emlite::Val {
    explicit MediaKeys(Handle h) noexcept;
public:
    explicit MediaKeys(const emlite::Val &val) noexcept;
    static MediaKeys take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeys clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createSession method.
    /// [`MediaKeys.createSession`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys/createSession)
    MediaKeySession createSession();
    /// The createSession method.
    /// [`MediaKeys.createSession`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys/createSession)
    MediaKeySession createSession(const MediaKeySessionType& sessionType);
    /// The getStatusForPolicy method.
    /// [`MediaKeys.getStatusForPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys/getStatusForPolicy)
    jsbind::Promise<MediaKeyStatus> getStatusForPolicy();
    /// The getStatusForPolicy method.
    /// [`MediaKeys.getStatusForPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys/getStatusForPolicy)
    jsbind::Promise<MediaKeyStatus> getStatusForPolicy(const MediaKeysPolicy& policy);
    /// The setServerCertificate method.
    /// [`MediaKeys.setServerCertificate`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys/setServerCertificate)
    jsbind::Promise<bool> setServerCertificate(const jsbind::Any& serverCertificate);
};

} // namespace webbind