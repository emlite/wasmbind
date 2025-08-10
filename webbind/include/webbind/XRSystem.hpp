#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "XRSessionInit.hpp"
#include "enums.hpp"

namespace webbind {

class XRSession;

/// Interface XRSystem
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
    /// [`XRSystem.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/ondevicechange)
    /// [`XRSystem.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/ondevicechange)
    [[nodiscard]] jsbind::Any ondevicechange() const;
    /// Setter of the `ondevicechange` attribute.
    /// [`XRSystem.ondevicechange`](https://developer.mozilla.org/en-US/docs/Web/API/XRSystem/ondevicechange)
    void ondevicechange(const jsbind::Any& value);
};

} // namespace webbind