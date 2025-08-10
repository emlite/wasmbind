#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PushSubscriptionOptionsInit.hpp"
#include "enums.hpp"

namespace webbind {

class PushSubscription;

/// Interface PushManager
/// [`PushManager`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager)
class PushManager : public emlite::Val {
    explicit PushManager(Handle h) noexcept;
public:
    explicit PushManager(const emlite::Val &val) noexcept;
    static PushManager take_ownership(Handle h) noexcept;
    [[nodiscard]] PushManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `supportedContentEncodings` static attribute.
    /// [`PushManager.supportedContentEncodings`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager/supportedContentEncodings)
    [[nodiscard]] static jsbind::TypedArray<jsbind::String> supportedContentEncodings();
    /// The subscribe method.
    /// [`PushManager.subscribe`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager/subscribe)
    jsbind::Promise<PushSubscription> subscribe();
    /// The subscribe method.
    /// [`PushManager.subscribe`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager/subscribe)
    jsbind::Promise<PushSubscription> subscribe(const PushSubscriptionOptionsInit& options);
    /// The getSubscription method.
    /// [`PushManager.getSubscription`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager/getSubscription)
    jsbind::Promise<PushSubscription> getSubscription();
    /// The permissionState method.
    /// [`PushManager.permissionState`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager/permissionState)
    jsbind::Promise<PermissionState> permissionState();
    /// The permissionState method.
    /// [`PushManager.permissionState`](https://developer.mozilla.org/en-US/docs/Web/API/PushManager/permissionState)
    jsbind::Promise<PermissionState> permissionState(const PushSubscriptionOptionsInit& options);
};

} // namespace webbind