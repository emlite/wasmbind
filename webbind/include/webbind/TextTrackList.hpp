#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class TextTrack;


/// The TextTrackList class.
/// [`TextTrackList`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList)
class TextTrackList : public EventTarget {
    explicit TextTrackList(Handle h) noexcept;

public:
    explicit TextTrackList(const emlite::Val &val) noexcept;
    static TextTrackList take_ownership(Handle h) noexcept;

    [[nodiscard]] TextTrackList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`TextTrackList.length`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/length)
    [[nodiscard]] unsigned long length() const;
    /// The getTrackById method.
    /// [`TextTrackList.getTrackById`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/getTrackById)
    TextTrack getTrackById(const jsbind::String& id);
    /// Getter of the `onchange` attribute.
    /// [`TextTrackList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`TextTrackList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/onchange)
    void onchange(const jsbind::Any& value);
    /// Getter of the `onaddtrack` attribute.
    /// [`TextTrackList.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/onaddtrack)
    [[nodiscard]] jsbind::Any onaddtrack() const;
    /// Setter of the `onaddtrack` attribute.
    /// [`TextTrackList.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/onaddtrack)
    void onaddtrack(const jsbind::Any& value);
    /// Getter of the `onremovetrack` attribute.
    /// [`TextTrackList.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/onremovetrack)
    [[nodiscard]] jsbind::Any onremovetrack() const;
    /// Setter of the `onremovetrack` attribute.
    /// [`TextTrackList.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList/onremovetrack)
    void onremovetrack(const jsbind::Any& value);
};

