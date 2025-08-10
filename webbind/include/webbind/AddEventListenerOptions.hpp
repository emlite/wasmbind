#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventListenerOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type AddEventListenerOptions
/// [`AddEventListenerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AddEventListenerOptions)
class AddEventListenerOptions : public EventListenerOptions {
  explicit AddEventListenerOptions(Handle h) noexcept;
public:
    static AddEventListenerOptions take_ownership(Handle h) noexcept;
    explicit AddEventListenerOptions(const emlite::Val &val) noexcept;
    AddEventListenerOptions() noexcept;
    [[nodiscard]] AddEventListenerOptions clone() const noexcept;
    [[nodiscard]] bool passive() const;
    void passive(bool value);
    [[nodiscard]] bool once() const;
    void once(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind