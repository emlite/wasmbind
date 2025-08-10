#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEventInit.hpp"

namespace webbind {

class MessagePort;

/// Dictionary type ExtendableMessageEventInit
class ExtendableMessageEventInit : public ExtendableEventInit {
  explicit ExtendableMessageEventInit(Handle h) noexcept;
public:
    static ExtendableMessageEventInit take_ownership(Handle h) noexcept;
    explicit ExtendableMessageEventInit(const emlite::Val &val) noexcept;
    ExtendableMessageEventInit() noexcept;
    [[nodiscard]] ExtendableMessageEventInit clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::String origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::String& value);
    /// Getter of the `lastEventId` attribute.
    [[nodiscard]] jsbind::String lastEventId() const;
    /// Setter of the `lastEventId` attribute.
    void lastEventId(const jsbind::String& value);
    /// Getter of the `source` attribute.
    [[nodiscard]] jsbind::Any source() const;
    /// Setter of the `source` attribute.
    void source(const jsbind::Any& value);
    /// Getter of the `ports` attribute.
    [[nodiscard]] jsbind::TypedArray<MessagePort> ports() const;
    /// Setter of the `ports` attribute.
    void ports(const jsbind::TypedArray<MessagePort>& value);
};

} // namespace webbind