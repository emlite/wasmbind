#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaKeyStatusMap;


/// The MediaKeySession class.
/// [`MediaKeySession`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession)
class MediaKeySession : public EventTarget {
    explicit MediaKeySession(Handle h) noexcept;

public:
    explicit MediaKeySession(const emlite::Val &val) noexcept;
    static MediaKeySession take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaKeySession clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `sessionId` attribute.
    /// [`MediaKeySession.sessionId`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/sessionId)
    [[nodiscard]] jsbind::String sessionId() const;
    /// Getter of the `expiration` attribute.
    /// [`MediaKeySession.expiration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/expiration)
    [[nodiscard]] double expiration() const;
    /// Getter of the `closed` attribute.
    /// [`MediaKeySession.closed`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/closed)
    [[nodiscard]] jsbind::Promise<MediaKeySessionClosedReason> closed() const;
    /// Getter of the `keyStatuses` attribute.
    /// [`MediaKeySession.keyStatuses`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/keyStatuses)
    [[nodiscard]] MediaKeyStatusMap keyStatuses() const;
    /// Getter of the `onkeystatuseschange` attribute.
    /// [`MediaKeySession.onkeystatuseschange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/onkeystatuseschange)
    [[nodiscard]] jsbind::Any onkeystatuseschange() const;
    /// Setter of the `onkeystatuseschange` attribute.
    /// [`MediaKeySession.onkeystatuseschange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/onkeystatuseschange)
    void onkeystatuseschange(const jsbind::Any& value);
    /// Getter of the `onmessage` attribute.
    /// [`MediaKeySession.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`MediaKeySession.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/onmessage)
    void onmessage(const jsbind::Any& value);
    /// The generateRequest method.
    /// [`MediaKeySession.generateRequest`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/generateRequest)
    jsbind::Promise<jsbind::Undefined> generateRequest(const jsbind::String& initDataType, const jsbind::Any& initData);
    /// The load method.
    /// [`MediaKeySession.load`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/load)
    jsbind::Promise<bool> load(const jsbind::String& sessionId);
    /// The update method.
    /// [`MediaKeySession.update`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/update)
    jsbind::Promise<jsbind::Undefined> update(const jsbind::Any& response);
    /// The close method.
    /// [`MediaKeySession.close`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/close)
    jsbind::Promise<jsbind::Undefined> close();
    /// The remove method.
    /// [`MediaKeySession.remove`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession/remove)
    jsbind::Promise<jsbind::Undefined> remove();
};

