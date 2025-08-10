#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface RemotePlayback
/// [`RemotePlayback`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback)
class RemotePlayback : public EventTarget {
    explicit RemotePlayback(Handle h) noexcept;
public:
    explicit RemotePlayback(const emlite::Val &val) noexcept;
    static RemotePlayback take_ownership(Handle h) noexcept;
    [[nodiscard]] RemotePlayback clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The watchAvailability method.
    /// [`RemotePlayback.watchAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/watchAvailability)
    jsbind::Promise<long> watchAvailability(const jsbind::Function& callback);
    /// The cancelWatchAvailability method.
    /// [`RemotePlayback.cancelWatchAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/cancelWatchAvailability)
    jsbind::Promise<jsbind::Undefined> cancelWatchAvailability();
    /// The cancelWatchAvailability method.
    /// [`RemotePlayback.cancelWatchAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/cancelWatchAvailability)
    jsbind::Promise<jsbind::Undefined> cancelWatchAvailability(long id);
    /// Getter of the `state` attribute.
    /// [`RemotePlayback.state`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/state)
    [[nodiscard]] RemotePlaybackState state() const;
    /// Getter of the `onconnecting` attribute.
    /// [`RemotePlayback.onconnecting`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/onconnecting)
    [[nodiscard]] jsbind::Any onconnecting() const;
    /// Setter of the `onconnecting` attribute.
    /// [`RemotePlayback.onconnecting`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/onconnecting)
    void onconnecting(const jsbind::Any& value);
    /// Getter of the `onconnect` attribute.
    /// [`RemotePlayback.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/onconnect)
    [[nodiscard]] jsbind::Any onconnect() const;
    /// Setter of the `onconnect` attribute.
    /// [`RemotePlayback.onconnect`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/onconnect)
    void onconnect(const jsbind::Any& value);
    /// Getter of the `ondisconnect` attribute.
    /// [`RemotePlayback.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/ondisconnect)
    [[nodiscard]] jsbind::Any ondisconnect() const;
    /// Setter of the `ondisconnect` attribute.
    /// [`RemotePlayback.ondisconnect`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/ondisconnect)
    void ondisconnect(const jsbind::Any& value);
    /// The prompt method.
    /// [`RemotePlayback.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback/prompt)
    jsbind::Promise<jsbind::Undefined> prompt();
};

} // namespace webbind