#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StructuredSerializeOptions.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface Client
/// [`Client`](https://developer.mozilla.org/en-US/docs/Web/API/Client)
class Client : public emlite::Val {
    explicit Client(Handle h) noexcept;
public:
    explicit Client(const emlite::Val &val) noexcept;
    static Client take_ownership(Handle h) noexcept;
    [[nodiscard]] Client clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Client.url`](https://developer.mozilla.org/en-US/docs/Web/API/Client/url)
    /// [`Client.url`](https://developer.mozilla.org/en-US/docs/Web/API/Client/url)
    [[nodiscard]] jsbind::String url() const;
    /// [`Client.frameType`](https://developer.mozilla.org/en-US/docs/Web/API/Client/frameType)
    /// [`Client.frameType`](https://developer.mozilla.org/en-US/docs/Web/API/Client/frameType)
    [[nodiscard]] FrameType frameType() const;
    /// [`Client.id`](https://developer.mozilla.org/en-US/docs/Web/API/Client/id)
    /// [`Client.id`](https://developer.mozilla.org/en-US/docs/Web/API/Client/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`Client.type`](https://developer.mozilla.org/en-US/docs/Web/API/Client/type)
    /// [`Client.type`](https://developer.mozilla.org/en-US/docs/Web/API/Client/type)
    [[nodiscard]] ClientType type() const;
    /// The postMessage method.
    /// [`Client.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Client/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`Client.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Client/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// [`Client.lifecycleState`](https://developer.mozilla.org/en-US/docs/Web/API/Client/lifecycleState)
    /// [`Client.lifecycleState`](https://developer.mozilla.org/en-US/docs/Web/API/Client/lifecycleState)
    [[nodiscard]] ClientLifecycleState lifecycleState() const;
};

} // namespace webbind