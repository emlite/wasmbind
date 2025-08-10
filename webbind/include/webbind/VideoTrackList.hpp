#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class VideoTrack;

/// Interface VideoTrackList
/// [`VideoTrackList`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList)
class VideoTrackList : public EventTarget {
    explicit VideoTrackList(Handle h) noexcept;
public:
    explicit VideoTrackList(const emlite::Val &val) noexcept;
    static VideoTrackList take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoTrackList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`VideoTrackList.length`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/length)
    [[nodiscard]] unsigned long length() const;
    /// The getTrackById method.
    /// [`VideoTrackList.getTrackById`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/getTrackById)
    VideoTrack getTrackById(const jsbind::String& id);
    /// Getter of the `selectedIndex` attribute.
    /// [`VideoTrackList.selectedIndex`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/selectedIndex)
    [[nodiscard]] long selectedIndex() const;
    /// Getter of the `onchange` attribute.
    /// [`VideoTrackList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`VideoTrackList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/onchange)
    void onchange(const jsbind::Any& value);
    /// Getter of the `onaddtrack` attribute.
    /// [`VideoTrackList.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/onaddtrack)
    [[nodiscard]] jsbind::Any onaddtrack() const;
    /// Setter of the `onaddtrack` attribute.
    /// [`VideoTrackList.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/onaddtrack)
    void onaddtrack(const jsbind::Any& value);
    /// Getter of the `onremovetrack` attribute.
    /// [`VideoTrackList.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/onremovetrack)
    [[nodiscard]] jsbind::Any onremovetrack() const;
    /// Setter of the `onremovetrack` attribute.
    /// [`VideoTrackList.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrackList/onremovetrack)
    void onremovetrack(const jsbind::Any& value);
};

} // namespace webbind