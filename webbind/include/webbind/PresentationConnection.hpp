#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The PresentationConnection class.
/// [`PresentationConnection`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection)
class PresentationConnection : public EventTarget {
    explicit PresentationConnection(Handle h) noexcept;

public:
    explicit PresentationConnection(const emlite::Val &val) noexcept;
    static PresentationConnection take_ownership(Handle h) noexcept;

    [[nodiscard]] PresentationConnection clone() const noexcept;
    /// Getter of the `id` attribute.
    /// [`PresentationConnection.id`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `url` attribute.
    /// [`PresentationConnection.url`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `state` attribute.
    /// [`PresentationConnection.state`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/state)
    [[nodiscard]] PresentationConnectionState state() const;
    /// The close method.
    /// [`PresentationConnection.close`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/close)
    jsbind::Undefined close();
    /// The terminate method.
    /// [`PresentationConnection.terminate`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/terminate)
    jsbind::Undefined terminate();
    /// Getter of the `onconnect` attribute.
    /// [`PresentationConnection.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`PresentationConnection.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onconnect)
    void onconnect(const jsbind::Any& value);
    /// Getter of the `onclose` attribute.
    /// [`PresentationConnection.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onclose)
    [[nodiscard]] jsbind::Any onclose() const;
    /// Setter of the `onclose` attribute.
    /// [`PresentationConnection.onclose`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onclose)
    void onclose(const jsbind::Any& value);
    /// Getter of the `onterminate` attribute.
    /// [`PresentationConnection.onterminate`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onterminate)
    [[nodiscard]] jsbind::Any onterminate() const;
    /// Setter of the `onterminate` attribute.
    /// [`PresentationConnection.onterminate`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onterminate)
    void onterminate(const jsbind::Any& value);
    /// Getter of the `binaryType` attribute.
    /// [`PresentationConnection.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/binaryType)
    [[nodiscard]] BinaryType binaryType() const;
    /// Setter of the `binaryType` attribute.
    /// [`PresentationConnection.binaryType`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/binaryType)
    void binaryType(const BinaryType& value);
    /// Getter of the `onmessage` attribute.
    /// [`PresentationConnection.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`PresentationConnection.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/onmessage)
    void onmessage(const jsbind::Any& value);
    /// The send method.
    /// [`PresentationConnection.send`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnection/send)
    jsbind::Undefined send(const jsbind::Any& data);
};

