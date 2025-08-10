#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "MediaQueryListEventInit.hpp"

namespace webbind {

/// Interface MediaQueryListEvent
/// [`MediaQueryListEvent`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryListEvent)
class MediaQueryListEvent : public Event {
    explicit MediaQueryListEvent(Handle h) noexcept;
public:
    explicit MediaQueryListEvent(const emlite::Val &val) noexcept;
    static MediaQueryListEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaQueryListEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaQueryListEvent(..)` constructor, creating a new MediaQueryListEvent instance
    MediaQueryListEvent(const jsbind::String& type);
    /// The `new MediaQueryListEvent(..)` constructor, creating a new MediaQueryListEvent instance
    MediaQueryListEvent(const jsbind::String& type, const MediaQueryListEventInit& eventInitDict);
    /// Getter of the `media` attribute.
    /// [`MediaQueryListEvent.media`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryListEvent/media)
    [[nodiscard]] jsbind::String media() const;
    /// Getter of the `matches` attribute.
    /// [`MediaQueryListEvent.matches`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryListEvent/matches)
    [[nodiscard]] bool matches() const;
};

} // namespace webbind