#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class AudioTrack;

/// Interface AudioTrackList
/// [`AudioTrackList`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList)
class AudioTrackList : public EventTarget {
    explicit AudioTrackList(Handle h) noexcept;
public:
    explicit AudioTrackList(const emlite::Val &val) noexcept;
    static AudioTrackList take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioTrackList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`AudioTrackList.length`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/length)
    [[nodiscard]] unsigned long length() const;
    /// The getTrackById method.
    /// [`AudioTrackList.getTrackById`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/getTrackById)
    AudioTrack getTrackById(const jsbind::String& id);
    /// Getter of the `onchange` attribute.
    /// [`AudioTrackList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`AudioTrackList.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/onchange)
    void onchange(const jsbind::Any& value);
    /// Getter of the `onaddtrack` attribute.
    /// [`AudioTrackList.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/onaddtrack)
    [[nodiscard]] jsbind::Any onaddtrack() const;
    /// Setter of the `onaddtrack` attribute.
    /// [`AudioTrackList.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/onaddtrack)
    void onaddtrack(const jsbind::Any& value);
    /// Getter of the `onremovetrack` attribute.
    /// [`AudioTrackList.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/onremovetrack)
    [[nodiscard]] jsbind::Any onremovetrack() const;
    /// Setter of the `onremovetrack` attribute.
    /// [`AudioTrackList.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList/onremovetrack)
    void onremovetrack(const jsbind::Any& value);
};

} // namespace webbind