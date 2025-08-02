#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The TextUpdateEvent class.
/// [`TextUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent)
class TextUpdateEvent : public Event {
    explicit TextUpdateEvent(Handle h) noexcept;

public:
    explicit TextUpdateEvent(const emlite::Val &val) noexcept;
    static TextUpdateEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] TextUpdateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextUpdateEvent(..)` constructor, creating a new TextUpdateEvent instance
    TextUpdateEvent(const jsbind::String& type);
    /// The `new TextUpdateEvent(..)` constructor, creating a new TextUpdateEvent instance
    TextUpdateEvent(const jsbind::String& type, const jsbind::Any& options);
    /// Getter of the `updateRangeStart` attribute.
    /// [`TextUpdateEvent.updateRangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/updateRangeStart)
    [[nodiscard]] unsigned long updateRangeStart() const;
    /// Getter of the `updateRangeEnd` attribute.
    /// [`TextUpdateEvent.updateRangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/updateRangeEnd)
    [[nodiscard]] unsigned long updateRangeEnd() const;
    /// Getter of the `text` attribute.
    /// [`TextUpdateEvent.text`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/text)
    [[nodiscard]] jsbind::String text() const;
    /// Getter of the `selectionStart` attribute.
    /// [`TextUpdateEvent.selectionStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/selectionStart)
    [[nodiscard]] unsigned long selectionStart() const;
    /// Getter of the `selectionEnd` attribute.
    /// [`TextUpdateEvent.selectionEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextUpdateEvent/selectionEnd)
    [[nodiscard]] unsigned long selectionEnd() const;
};

