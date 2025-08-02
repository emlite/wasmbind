#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "MessagePort.hpp"
#include "enums.hpp"


/// The Client class.
/// [`Client`](https://developer.mozilla.org/en-US/docs/Web/API/Client)
class Client : public emlite::Val {
    explicit Client(Handle h) noexcept;

public:
    explicit Client(const emlite::Val &val) noexcept;
    static Client take_ownership(Handle h) noexcept;

    [[nodiscard]] Client clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `url` attribute.
    /// [`Client.url`](https://developer.mozilla.org/en-US/docs/Web/API/Client/url)
    [[nodiscard]] jsbind::String url() const;
    /// Getter of the `frameType` attribute.
    /// [`Client.frameType`](https://developer.mozilla.org/en-US/docs/Web/API/Client/frameType)
    [[nodiscard]] FrameType frameType() const;
    /// Getter of the `id` attribute.
    /// [`Client.id`](https://developer.mozilla.org/en-US/docs/Web/API/Client/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `type` attribute.
    /// [`Client.type`](https://developer.mozilla.org/en-US/docs/Web/API/Client/type)
    [[nodiscard]] ClientType type() const;
    /// The postMessage method.
    /// [`Client.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Client/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message);
    /// The postMessage method.
    /// [`Client.postMessage`](https://developer.mozilla.org/en-US/docs/Web/API/Client/postMessage)
    jsbind::Undefined postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options);
    /// Getter of the `lifecycleState` attribute.
    /// [`Client.lifecycleState`](https://developer.mozilla.org/en-US/docs/Web/API/Client/lifecycleState)
    [[nodiscard]] ClientLifecycleState lifecycleState() const;
};

