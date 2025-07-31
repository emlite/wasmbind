#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class TextFormat;


/// The TextFormatUpdateEvent class.
/// [`TextFormatUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormatUpdateEvent)
class TextFormatUpdateEvent : public Event {
    explicit TextFormatUpdateEvent(Handle h) noexcept;

public:
    explicit TextFormatUpdateEvent(const emlite::Val &val) noexcept;
    static TextFormatUpdateEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] TextFormatUpdateEvent clone() const noexcept;
    /// The `new TextFormatUpdateEvent(..)` constructor, creating a new TextFormatUpdateEvent instance
    TextFormatUpdateEvent(const jsbind::String& type);
    /// The `new TextFormatUpdateEvent(..)` constructor, creating a new TextFormatUpdateEvent instance
    TextFormatUpdateEvent(const jsbind::String& type, const jsbind::Any& options);
    /// The getTextFormats method.
    /// [`TextFormatUpdateEvent.getTextFormats`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormatUpdateEvent/getTextFormats)
    jsbind::TypedArray<TextFormat> getTextFormats();
};

