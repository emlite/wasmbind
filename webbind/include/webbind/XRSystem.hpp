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
    [[nodiscard]] XRSessionInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> requiredFeatures() const;
    void requiredFeatures(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> optionalFeatures() const;
    void optionalFeatures(const jsbind::TypedArray<jsbind::String>& value);
};

/// The XRSystem class.
/// [`XRSystem`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem)
class XRSystem : public EventTarget {
    explicit XRSystem(Handle h) noexcept;

public:
    explicit XRSystem(const emlite::Val &val) noexcept;
    static XRSystem take_ownership(Handle h) noexcept;

    [[nodiscard]] XRSystem clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The isSessionSupported method.
    /// [`XRSystem.isSessionSupported`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/isSessionSupported)
    jsbind::Promise<bool> isSessionSupported(const XRSessionMode& mode);
    /// The requestSession method.
    /// [`XRSystem.requestSession`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/requestSession)
    jsbind::Promise<XRSession> requestSession(const XRSessionMode& mode);
    /// The requestSession method.
    /// [`XRSystem.requestSession`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/requestSession)
    jsbind::Promise<XRSession> requestSession(const XRSessionMode& mode, const XRSessionInit& options);
    /// Getter of the `ondevicechange` attribute.
    /// [`XRSystem.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/ondevicechange)
    [[nodiscard]] jsbind::Any ondevicechange() const;
    /// Setter of the `ondevicechange` attribute.
    /// [`XRSystem.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/ondevicechange)
    void ondevicechange(const jsbind::Any& value);
};

