#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "PictureInPictureEventInit.hpp"

namespace webbind {

class PictureInPictureWindow;

/// Interface PictureInPictureEvent
/// [`PictureInPictureEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureEvent)
class PictureInPictureEvent : public Event {
    explicit PictureInPictureEvent(Handle h) noexcept;
public:
    explicit PictureInPictureEvent(const emlite::Val &val) noexcept;
    static PictureInPictureEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PictureInPictureEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PictureInPictureEvent(..)` constructor, creating a new PictureInPictureEvent instance
    PictureInPictureEvent(const jsbind::String& type, const PictureInPictureEventInit& eventInitDict);
    /// Getter of the `pictureInPictureWindow` attribute.
    /// [`PictureInPictureEvent.pictureInPictureWindow`](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureEvent/pictureInPictureWindow)
    [[nodiscard]] PictureInPictureWindow pictureInPictureWindow() const;
};

} // namespace webbind