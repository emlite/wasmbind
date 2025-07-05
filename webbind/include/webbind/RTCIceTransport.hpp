#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class RTCIceCandidate;
class RTCIceCandidatePair;
class RTCIceParameters;
class RTCIceGatherOptions;
class RTCIceCandidateInit;


class RTCIceParameters : public emlite::Val {
  explicit RTCIceParameters(Handle h) noexcept;
public:
    static RTCIceParameters take_ownership(Handle h) noexcept;
    explicit RTCIceParameters(const emlite::Val &val) noexcept;
    RTCIceParameters() noexcept;
    RTCIceParameters clone() const noexcept;
    jsbind::DOMString usernameFragment() const;
    void usernameFragment(const jsbind::DOMString& value);
    jsbind::DOMString password() const;
    void password(const jsbind::DOMString& value);
};

class RTCIceGatherOptions : public emlite::Val {
  explicit RTCIceGatherOptions(Handle h) noexcept;
public:
    static RTCIceGatherOptions take_ownership(Handle h) noexcept;
    explicit RTCIceGatherOptions(const emlite::Val &val) noexcept;
    RTCIceGatherOptions() noexcept;
    RTCIceGatherOptions clone() const noexcept;
    RTCIceTransportPolicy gatherPolicy() const;
    void gatherPolicy(const RTCIceTransportPolicy& value);
    jsbind::Sequence<jsbind::Any> iceServers() const;
    void iceServers(const jsbind::Sequence<jsbind::Any>& value);
};

class RTCIceCandidateInit : public emlite::Val {
  explicit RTCIceCandidateInit(Handle h) noexcept;
public:
    static RTCIceCandidateInit take_ownership(Handle h) noexcept;
    explicit RTCIceCandidateInit(const emlite::Val &val) noexcept;
    RTCIceCandidateInit() noexcept;
    RTCIceCandidateInit clone() const noexcept;
    jsbind::DOMString candidate() const;
    void candidate(const jsbind::DOMString& value);
    jsbind::DOMString sdpMid() const;
    void sdpMid(const jsbind::DOMString& value);
    unsigned short sdpMLineIndex() const;
    void sdpMLineIndex(unsigned short value);
    jsbind::DOMString usernameFragment() const;
    void usernameFragment(const jsbind::DOMString& value);
};

class RTCIceTransport : public EventTarget {
    explicit RTCIceTransport(Handle h) noexcept;

public:
    explicit RTCIceTransport(const emlite::Val &val) noexcept;
    static RTCIceTransport take_ownership(Handle h) noexcept;

    RTCIceTransport clone() const noexcept;
    RTCIceRole role() const;
    RTCIceComponent component() const;
    RTCIceTransportState state() const;
    RTCIceGathererState gatheringState() const;
    jsbind::Sequence<RTCIceCandidate> getLocalCandidates();
    jsbind::Sequence<RTCIceCandidate> getRemoteCandidates();
    RTCIceCandidatePair getSelectedCandidatePair();
    RTCIceParameters getLocalParameters();
    RTCIceParameters getRemoteParameters();
    jsbind::Any onstatechange() const;
    void onstatechange(const jsbind::Any& value);
    jsbind::Any ongatheringstatechange() const;
    void ongatheringstatechange(const jsbind::Any& value);
    jsbind::Any onselectedcandidatepairchange() const;
    void onselectedcandidatepairchange(const jsbind::Any& value);
    RTCIceTransport();
    jsbind::Undefined gather();
    jsbind::Undefined gather(const RTCIceGatherOptions& options);
    jsbind::Undefined start();
    jsbind::Undefined start(const RTCIceParameters& remoteParameters);
    jsbind::Undefined start(const RTCIceParameters& remoteParameters, const RTCIceRole& role);
    jsbind::Undefined stop();
    jsbind::Undefined addRemoteCandidate();
    jsbind::Undefined addRemoteCandidate(const RTCIceCandidateInit& remoteCandidate);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onicecandidate() const;
    void onicecandidate(const jsbind::Any& value);
};

