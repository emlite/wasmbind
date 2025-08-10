#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type EventInit
/// [`EventInit`](https://developer.mozilla.org/en-US/docs/Web/API/EventInit)
class EventInit : public emlite::Val {
  explicit EventInit(Handle h) noexcept;
public:
    static EventInit take_ownership(Handle h) noexcept;
    explicit EventInit(const emlite::Val &val) noexcept;
    EventInit() noexcept;
    [[nodiscard]] EventInit clone() const noexcept;
    [[nodiscard]] bool bubbles() const;
    void bubbles(bool value);
    [[nodiscard]] bool cancelable() const;
    void cancelable(bool value);
    [[nodiscard]] bool composed() const;
    void composed(bool value);
};

} // namespace webbind