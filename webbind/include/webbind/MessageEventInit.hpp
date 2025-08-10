#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class MessagePort;

/// Dictionary type MessageEventInit
/// [`MessageEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/MessageEventInit)
class MessageEventInit : public EventInit {
  explicit MessageEventInit(Handle h) noexcept;
public:
    static MessageEventInit take_ownership(Handle h) noexcept;
    explicit MessageEventInit(const emlite::Val &val) noexcept;
    MessageEventInit() noexcept;
    [[nodiscard]] MessageEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
    [[nodiscard]] jsbind::String origin() const;
    void origin(const jsbind::String& value);
    [[nodiscard]] jsbind::String lastEventId() const;
    void lastEventId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any source() const;
    void source(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<MessagePort> ports() const;
    void ports(const jsbind::TypedArray<MessagePort>& value);
};

} // namespace webbind