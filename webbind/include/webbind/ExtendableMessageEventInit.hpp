#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class MessagePort;

/// Dictionary type ExtendableMessageEventInit
/// [`ExtendableMessageEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableMessageEventInit)
class ExtendableMessageEventInit : public ExtendableEventInit {
  explicit ExtendableMessageEventInit(Handle h) noexcept;
public:
    static ExtendableMessageEventInit take_ownership(Handle h) noexcept;
    explicit ExtendableMessageEventInit(const emlite::Val &val) noexcept;
    ExtendableMessageEventInit() noexcept;
    [[nodiscard]] ExtendableMessageEventInit clone() const noexcept;
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