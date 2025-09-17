#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class EventListener;

/// Interface MediaQueryList
/// [`MediaQueryList`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList)
class MediaQueryList : public EventTarget {
    explicit MediaQueryList(Handle h) noexcept;
public:
    explicit MediaQueryList(const emlite::Val &val) noexcept;
    static MediaQueryList take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaQueryList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MediaQueryList.media`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/media)
    /// [`MediaQueryList.media`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/media)
    [[nodiscard]] jsbind::String media() const;
    /// [`MediaQueryList.matches`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/matches)
    /// [`MediaQueryList.matches`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/matches)
    [[nodiscard]] bool matches() const;
    /// The addListener method.
    /// [`MediaQueryList.addListener`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/addListener)
    jsbind::Undefined addListener(const EventListener& callback);
    /// The removeListener method.
    /// [`MediaQueryList.removeListener`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/removeListener)
    jsbind::Undefined removeListener(const EventListener& callback);
    /// [`MediaQueryList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/onchange)
    /// [`MediaQueryList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`MediaQueryList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList/onchange)
    void onchange(const jsbind::Any& value);
};

} // namespace webbind