#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MediaKeySession;
class MediaKeysPolicy;


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

/// The MediaKeys class.
/// [`MediaKeys`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeys)
class MediaKeys : public emlite::Val {
    explicit MediaKeys(Handle h) noexcept;

public:
    explicit MediaKeys(const emlite::Val &val) noexcept;
    static MediaKeys take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaKeys clone() const noexcept;
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

