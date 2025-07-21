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
    MediaKeysPolicy clone() const noexcept;
    jsbind::DOMString minHdcpVersion() const;
    void minHdcpVersion(const jsbind::DOMString& value);
};

class MediaKeys : public emlite::Val {
    explicit MediaKeys(Handle h) noexcept;

public:
    explicit MediaKeys(const emlite::Val &val) noexcept;
    static MediaKeys take_ownership(Handle h) noexcept;

    MediaKeys clone() const noexcept;
    MediaKeySession createSession();
    MediaKeySession createSession(const MediaKeySessionType& sessionType);
    jsbind::Promise<MediaKeyStatus> getStatusForPolicy();
    jsbind::Promise<MediaKeyStatus> getStatusForPolicy(const MediaKeysPolicy& policy);
    jsbind::Promise<bool> setServerCertificate(const jsbind::Any& serverCertificate);
};

