#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PresentationConnectionCloseEventInit
class PresentationConnectionCloseEventInit : public EventInit {
  explicit PresentationConnectionCloseEventInit(Handle h) noexcept;
public:
    static PresentationConnectionCloseEventInit take_ownership(Handle h) noexcept;
    explicit PresentationConnectionCloseEventInit(const emlite::Val &val) noexcept;
    PresentationConnectionCloseEventInit() noexcept;
    [[nodiscard]] PresentationConnectionCloseEventInit clone() const noexcept;
    /// Getter of the `reason` attribute.
    [[nodiscard]] PresentationConnectionCloseReason reason() const;
    /// Setter of the `reason` attribute.
    void reason(const PresentationConnectionCloseReason& value);
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::String message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::String& value);
};

} // namespace webbind