#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PresentationConnectionCloseEventInit
/// [`PresentationConnectionCloseEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseEventInit)
class PresentationConnectionCloseEventInit : public EventInit {
  explicit PresentationConnectionCloseEventInit(Handle h) noexcept;
public:
    static PresentationConnectionCloseEventInit take_ownership(Handle h) noexcept;
    explicit PresentationConnectionCloseEventInit(const emlite::Val &val) noexcept;
    PresentationConnectionCloseEventInit() noexcept;
    [[nodiscard]] PresentationConnectionCloseEventInit clone() const noexcept;
    [[nodiscard]] PresentationConnectionCloseReason reason() const;
    void reason(const PresentationConnectionCloseReason& value);
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
};

} // namespace webbind