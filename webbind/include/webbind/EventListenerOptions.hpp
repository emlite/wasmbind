#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EventListenerOptions
/// [`EventListenerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/EventListenerOptions)
class EventListenerOptions : public emlite::Val {
  explicit EventListenerOptions(Handle h) noexcept;
public:
    static EventListenerOptions take_ownership(Handle h) noexcept;
    explicit EventListenerOptions(const emlite::Val &val) noexcept;
    EventListenerOptions() noexcept;
    [[nodiscard]] EventListenerOptions clone() const noexcept;
    [[nodiscard]] bool capture() const;
    void capture(bool value);
};

} // namespace webbind