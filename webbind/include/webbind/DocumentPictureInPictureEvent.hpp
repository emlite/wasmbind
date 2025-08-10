#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "DocumentPictureInPictureEventInit.hpp"

namespace webbind {

class Window;

/// Interface DocumentPictureInPictureEvent
/// [`DocumentPictureInPictureEvent`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureEvent)
class DocumentPictureInPictureEvent : public Event {
    explicit DocumentPictureInPictureEvent(Handle h) noexcept;
public:
    explicit DocumentPictureInPictureEvent(const emlite::Val &val) noexcept;
    static DocumentPictureInPictureEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentPictureInPictureEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DocumentPictureInPictureEvent(..)` constructor, creating a new DocumentPictureInPictureEvent instance
    DocumentPictureInPictureEvent(const jsbind::String& type, const DocumentPictureInPictureEventInit& eventInitDict);
    /// Getter of the `window` attribute.
    /// [`DocumentPictureInPictureEvent.window`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureEvent/window)
    [[nodiscard]] Window window() const;
};

} // namespace webbind