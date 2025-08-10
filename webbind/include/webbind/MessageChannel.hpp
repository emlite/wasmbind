#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MessagePort;

/// Interface MessageChannel
/// [`MessageChannel`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel)
class MessageChannel : public emlite::Val {
    explicit MessageChannel(Handle h) noexcept;
public:
    explicit MessageChannel(const emlite::Val &val) noexcept;
    static MessageChannel take_ownership(Handle h) noexcept;
    [[nodiscard]] MessageChannel clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MessageChannel(..)` constructor, creating a new MessageChannel instance
    MessageChannel();
    /// [`MessageChannel.port1`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel/port1)
    /// [`MessageChannel.port1`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel/port1)
    [[nodiscard]] MessagePort port1() const;
    /// [`MessageChannel.port2`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel/port2)
    /// [`MessageChannel.port2`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel/port2)
    [[nodiscard]] MessagePort port2() const;
};

} // namespace webbind