#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "RTCIceParameters.hpp"
#include "RTCIceGatherOptions.hpp"
#include "RTCIceCandidateInit.hpp"
#include "enums.hpp"

namespace webbind {

class RTCIceCandidate;
class RTCIceCandidatePair;

/// Interface RTCIceTransport
/// [`RTCIceTransport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport)
class RTCIceTransport : public EventTarget {
    explicit RTCIceTransport(Handle h) noexcept;
public:
    explicit RTCIceTransport(const emlite::Val &val) noexcept;
    static RTCIceTransport take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTransport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`RTCIceTransport.role`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/role)
    /// [`RTCIceTransport.role`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/role)
    [[nodiscard]] RTCIceRole role() const;
    /// [`RTCIceTransport.component`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/component)
    /// [`RTCIceTransport.component`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/component)
    [[nodiscard]] RTCIceComponent component() const;
    /// [`RTCIceTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/state)
    /// [`RTCIceTransport.state`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/state)
    [[nodiscard]] RTCIceTransportState state() const;
    /// [`RTCIceTransport.gatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gatheringState)
    /// [`RTCIceTransport.gatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gatheringState)
    [[nodiscard]] RTCIceGathererState gatheringState() const;
    /// The getLocalCandidates method.
    /// [`RTCIceTransport.getLocalCandidates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getLocalCandidates)
    jsbind::TypedArray<RTCIceCandidate> getLocalCandidates();
    /// The getRemoteCandidates method.
    /// [`RTCIceTransport.getRemoteCandidates`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getRemoteCandidates)
    jsbind::TypedArray<RTCIceCandidate> getRemoteCandidates();
    /// The getSelectedCandidatePair method.
    /// [`RTCIceTransport.getSelectedCandidatePair`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getSelectedCandidatePair)
    RTCIceCandidatePair getSelectedCandidatePair();
    /// The getLocalParameters method.
    /// [`RTCIceTransport.getLocalParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getLocalParameters)
    RTCIceParameters getLocalParameters();
    /// The getRemoteParameters method.
    /// [`RTCIceTransport.getRemoteParameters`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/getRemoteParameters)
    RTCIceParameters getRemoteParameters();
    /// [`RTCIceTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onstatechange)
    /// [`RTCIceTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onstatechange)
    [[nodiscard]] jsbind::Any onstatechange() const;
    /// Setter of the `onstatechange` attribute.
    /// [`RTCIceTransport.onstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onstatechange)
    void onstatechange(const jsbind::Any& value);
    /// [`RTCIceTransport.ongatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/ongatheringstatechange)
    /// [`RTCIceTransport.ongatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/ongatheringstatechange)
    [[nodiscard]] jsbind::Any ongatheringstatechange() const;
    /// Setter of the `ongatheringstatechange` attribute.
    /// [`RTCIceTransport.ongatheringstatechange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/ongatheringstatechange)
    void ongatheringstatechange(const jsbind::Any& value);
    /// [`RTCIceTransport.onselectedcandidatepairchange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onselectedcandidatepairchange)
    /// [`RTCIceTransport.onselectedcandidatepairchange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onselectedcandidatepairchange)
    [[nodiscard]] jsbind::Any onselectedcandidatepairchange() const;
    /// Setter of the `onselectedcandidatepairchange` attribute.
    /// [`RTCIceTransport.onselectedcandidatepairchange`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onselectedcandidatepairchange)
    void onselectedcandidatepairchange(const jsbind::Any& value);
    /// The `new RTCIceTransport(..)` constructor, creating a new RTCIceTransport instance
    RTCIceTransport();
    /// The gather method.
    /// [`RTCIceTransport.gather`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gather)
    jsbind::Undefined gather();
    /// The gather method.
    /// [`RTCIceTransport.gather`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/gather)
    jsbind::Undefined gather(const RTCIceGatherOptions& options);
    /// The start method.
    /// [`RTCIceTransport.start`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/start)
    jsbind::Undefined start();
    /// The start method.
    /// [`RTCIceTransport.start`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/start)
    jsbind::Undefined start(const RTCIceParameters& remoteParameters);
    /// The start method.
    /// [`RTCIceTransport.start`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/start)
    jsbind::Undefined start(const RTCIceParameters& remoteParameters, const RTCIceRole& role);
    /// The stop method.
    /// [`RTCIceTransport.stop`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/stop)
    jsbind::Undefined stop();
    /// The addRemoteCandidate method.
    /// [`RTCIceTransport.addRemoteCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/addRemoteCandidate)
    jsbind::Undefined addRemoteCandidate();
    /// The addRemoteCandidate method.
    /// [`RTCIceTransport.addRemoteCandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/addRemoteCandidate)
    jsbind::Undefined addRemoteCandidate(const RTCIceCandidateInit& remoteCandidate);
    /// [`RTCIceTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onerror)
    /// [`RTCIceTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`RTCIceTransport.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onerror)
    void onerror(const jsbind::Any& value);
    /// [`RTCIceTransport.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onicecandidate)
    /// [`RTCIceTransport.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onicecandidate)
    [[nodiscard]] jsbind::Any onicecandidate() const;
    /// Setter of the `onicecandidate` attribute.
    /// [`RTCIceTransport.onicecandidate`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransport/onicecandidate)
    void onicecandidate(const jsbind::Any& value);
};

} // namespace webbind