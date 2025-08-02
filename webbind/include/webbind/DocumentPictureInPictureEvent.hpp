#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Window;


/// The DocumentPictureInPictureEvent class.
/// [`DocumentPictureInPictureEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureEvent)
class DocumentPictureInPictureEvent : public Event {
    explicit DocumentPictureInPictureEvent(Handle h) noexcept;

public:
    explicit DocumentPictureInPictureEvent(const emlite::Val &val) noexcept;
    static DocumentPictureInPictureEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] DocumentPictureInPictureEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DocumentPictureInPictureEvent(..)` constructor, creating a new DocumentPictureInPictureEvent instance
    DocumentPictureInPictureEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `window` attribute.
    /// [`DocumentPictureInPictureEvent.window`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureEvent/window)
    [[nodiscard]] Window window() const;
};

