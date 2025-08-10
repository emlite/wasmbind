#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class FormDataEventInit;
class FormData;

/// Interface FormDataEvent
/// [`FormDataEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEvent)
class FormDataEvent : public Event {
    explicit FormDataEvent(Handle h) noexcept;
public:
    explicit FormDataEvent(const emlite::Val &val) noexcept;
    static FormDataEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] FormDataEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new FormDataEvent(..)` constructor, creating a new FormDataEvent instance
    FormDataEvent(const jsbind::String& type, const FormDataEventInit& eventInitDict);
    /// [`FormDataEvent.formData`](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEvent/formData)
    /// [`FormDataEvent.formData`](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEvent/formData)
    [[nodiscard]] FormData formData() const;
};

} // namespace webbind