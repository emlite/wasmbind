#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventListenerOptions.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type AddEventListenerOptions
class AddEventListenerOptions : public EventListenerOptions {
  explicit AddEventListenerOptions(Handle h) noexcept;
public:
    static AddEventListenerOptions take_ownership(Handle h) noexcept;
    explicit AddEventListenerOptions(const emlite::Val &val) noexcept;
    AddEventListenerOptions() noexcept;
    [[nodiscard]] AddEventListenerOptions clone() const noexcept;
    /// Getter of the `passive` attribute.
    [[nodiscard]] bool passive() const;
    /// Setter of the `passive` attribute.
    void passive(bool value);
    /// Getter of the `once` attribute.
    [[nodiscard]] bool once() const;
    /// Setter of the `once` attribute.
    void once(bool value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind