#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "ErrorEventInit.hpp"

namespace webbind {

/// Interface ErrorEvent
/// [`ErrorEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent)
class ErrorEvent : public Event {
    explicit ErrorEvent(Handle h) noexcept;
public:
    explicit ErrorEvent(const emlite::Val &val) noexcept;
    static ErrorEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] ErrorEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ErrorEvent(..)` constructor, creating a new ErrorEvent instance
    ErrorEvent(const jsbind::String& type);
    /// The `new ErrorEvent(..)` constructor, creating a new ErrorEvent instance
    ErrorEvent(const jsbind::String& type, const ErrorEventInit& eventInitDict);
    /// Getter of the `message` attribute.
    /// [`ErrorEvent.message`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent/message)
    [[nodiscard]] jsbind::String message() const;
    /// Getter of the `filename` attribute.
    /// [`ErrorEvent.filename`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent/filename)
    [[nodiscard]] jsbind::String filename() const;
    /// Getter of the `lineno` attribute.
    /// [`ErrorEvent.lineno`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent/lineno)
    [[nodiscard]] unsigned long lineno() const;
    /// Getter of the `colno` attribute.
    /// [`ErrorEvent.colno`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent/colno)
    [[nodiscard]] unsigned long colno() const;
    /// Getter of the `error` attribute.
    /// [`ErrorEvent.error`](https://developer.mozilla.org/en-US/docs/Web/API/ErrorEvent/error)
    [[nodiscard]] jsbind::Any error() const;
};

} // namespace webbind