#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MessagePort;


/// The MessageChannel class.
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
    /// Getter of the `port1` attribute.
    /// [`MessageChannel.port1`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel/port1)
    [[nodiscard]] jsbind::Any port1() const;
    /// Getter of the `port2` attribute.
    /// [`MessageChannel.port2`](https://developer.mozilla.org/en-US/docs/Web/API/MessageChannel/port2)
    [[nodiscard]] jsbind::Any port2() const;
};

