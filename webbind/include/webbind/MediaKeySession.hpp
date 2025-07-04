#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaKeyStatusMap;


class MediaKeySession : public EventTarget {
    explicit MediaKeySession(Handle h) noexcept;

public:
    explicit MediaKeySession(const emlite::Val &val) noexcept;
    static MediaKeySession take_ownership(Handle h) noexcept;

    MediaKeySession clone() const noexcept;
    jsbind::DOMString sessionId() const;
    double expiration() const;
    jsbind::Promise closed() const;
    MediaKeyStatusMap keyStatuses() const;
    jsbind::Any onkeystatuseschange() const;
    void onkeystatuseschange(const jsbind::Any& value);
    jsbind::Any onmessage() const;
    void onmessage(const jsbind::Any& value);
    jsbind::Promise generateRequest(const jsbind::DOMString& initDataType, const jsbind::Any& initData);
    jsbind::Promise load(const jsbind::DOMString& sessionId);
    jsbind::Promise update(const jsbind::Any& response);
    jsbind::Promise close();
    jsbind::Promise remove();
};

