#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class FormData;


/// The FormDataEvent class.
/// [`FormDataEvent`](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEvent)
class FormDataEvent : public Event {
    explicit FormDataEvent(Handle h) noexcept;

public:
    explicit FormDataEvent(const emlite::Val &val) noexcept;
    static FormDataEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] FormDataEvent clone() const noexcept;
    /// The `new FormDataEvent(..)` constructor, creating a new FormDataEvent instance
    FormDataEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `formData` attribute.
    /// [`FormDataEvent.formData`](https://developer.mozilla.org/en-US/docs/Web/API/FormDataEvent/formData)
    [[nodiscard]] FormData formData() const;
};

