#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class DataTransfer;


/// The ClipboardEvent class.
/// [`ClipboardEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardEvent)
class ClipboardEvent : public Event {
    explicit ClipboardEvent(Handle h) noexcept;

public:
    explicit ClipboardEvent(const emlite::Val &val) noexcept;
    static ClipboardEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ClipboardEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ClipboardEvent(..)` constructor, creating a new ClipboardEvent instance
    ClipboardEvent(const jsbind::String& type);
    /// The `new ClipboardEvent(..)` constructor, creating a new ClipboardEvent instance
    ClipboardEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `clipboardData` attribute.
    /// [`ClipboardEvent.clipboardData`](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardEvent/clipboardData)
    [[nodiscard]] DataTransfer clipboardData() const;
};

