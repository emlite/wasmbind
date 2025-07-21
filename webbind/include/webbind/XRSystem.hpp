#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class XRSession;
class XRSessionInit;


class XRSessionInit : public emlite::Val {
  explicit XRSessionInit(Handle h) noexcept;
public:
    static XRSessionInit take_ownership(Handle h) noexcept;
    explicit XRSessionInit(const emlite::Val &val) noexcept;
    XRSessionInit() noexcept;
    XRSessionInit clone() const noexcept;
    jsbind::Sequence<jsbind::DOMString> requiredFeatures() const;
    void requiredFeatures(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::DOMString> optionalFeatures() const;
    void optionalFeatures(const jsbind::Sequence<jsbind::DOMString>& value);
};

class XRSystem : public EventTarget {
    explicit XRSystem(Handle h) noexcept;

public:
    explicit XRSystem(const emlite::Val &val) noexcept;
    static XRSystem take_ownership(Handle h) noexcept;

    XRSystem clone() const noexcept;
    jsbind::Promise<bool> isSessionSupported(const XRSessionMode& mode);
    jsbind::Promise<XRSession> requestSession(const XRSessionMode& mode);
    jsbind::Promise<XRSession> requestSession(const XRSessionMode& mode, const XRSessionInit& options);
    jsbind::Any ondevicechange() const;
    void ondevicechange(const jsbind::Any& value);
};

