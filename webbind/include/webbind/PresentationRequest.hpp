#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class PresentationConnection;
class PresentationAvailability;


/// The PresentationRequest class.
/// [`PresentationRequest`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest)
class PresentationRequest : public EventTarget {
    explicit PresentationRequest(Handle h) noexcept;

public:
    explicit PresentationRequest(const emlite::Val &val) noexcept;
    static PresentationRequest take_ownership(Handle h) noexcept;

    [[nodiscard]] PresentationRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PresentationRequest(..)` constructor, creating a new PresentationRequest instance
    PresentationRequest(const jsbind::TypedArray<jsbind::String>& urls);
    /// The start method.
    /// [`PresentationRequest.start`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest/start)
    jsbind::Promise<PresentationConnection> start();
    /// The reconnect method.
    /// [`PresentationRequest.reconnect`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest/reconnect)
    jsbind::Promise<PresentationConnection> reconnect(const jsbind::String& presentationId);
    /// The getAvailability method.
    /// [`PresentationRequest.getAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest/getAvailability)
    jsbind::Promise<PresentationAvailability> getAvailability();
    /// Getter of the `onconnectionavailable` attribute.
    /// [`PresentationRequest.onconnectionavailable`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest/onconnectionavailable)
    [[nodiscard]] jsbind::Any onconnectionavailable() const;
    /// Setter of the `onconnectionavailable` attribute.
    /// [`PresentationRequest.onconnectionavailable`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationRequest/onconnectionavailable)
    void onconnectionavailable(const jsbind::Any& value);
};

