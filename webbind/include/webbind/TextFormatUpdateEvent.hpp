#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "TextFormatUpdateEventInit.hpp"

namespace webbind {

class TextFormat;

/// Interface TextFormatUpdateEvent
/// [`TextFormatUpdateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormatUpdateEvent)
class TextFormatUpdateEvent : public Event {
    explicit TextFormatUpdateEvent(Handle h) noexcept;
public:
    explicit TextFormatUpdateEvent(const emlite::Val &val) noexcept;
    static TextFormatUpdateEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] TextFormatUpdateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextFormatUpdateEvent(..)` constructor, creating a new TextFormatUpdateEvent instance
    TextFormatUpdateEvent(const jsbind::String& type);
    /// The `new TextFormatUpdateEvent(..)` constructor, creating a new TextFormatUpdateEvent instance
    TextFormatUpdateEvent(const jsbind::String& type, const TextFormatUpdateEventInit& options);
    /// The getTextFormats method.
    /// [`TextFormatUpdateEvent.getTextFormats`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormatUpdateEvent/getTextFormats)
    jsbind::TypedArray<TextFormat> getTextFormats();
};

} // namespace webbind