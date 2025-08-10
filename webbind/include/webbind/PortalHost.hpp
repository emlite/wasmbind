#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "StructuredSerializeOptions.hpp"

namespace webbind {

/// Interface PortalHost
/// [`PortalHost`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost)
class PortalHost : public EventTarget {
    explicit PortalHost(Handle h) noexcept;
public:
    explicit PortalHost(const emlite::Val &val) noexcept;
    static PortalHost take_ownership(Handle h) noexcept;
    [[nodiscard]] PortalHost clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The postMessage method.
    /// [`PortalHost.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`PortalHost.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// Getter of the `onmessage` attribute.
    /// [`PortalHost.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost/onmessage)
    [[nodiscard]] jsbind::Any onmessage() const;
    /// Setter of the `onmessage` attribute.
    /// [`PortalHost.onmessage`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost/onmessage)
    void onmessage(const jsbind::Any& value);
    /// Getter of the `onmessageerror` attribute.
    /// [`PortalHost.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost/onmessageerror)
    [[nodiscard]] jsbind::Any onmessageerror() const;
    /// Setter of the `onmessageerror` attribute.
    /// [`PortalHost.onmessageerror`](https://developer.mozilla.org/en-US/docs/Web/API/PortalHost/onmessageerror)
    void onmessageerror(const jsbind::Any& value);
};

} // namespace webbind