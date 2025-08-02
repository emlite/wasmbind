#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TextTrackCue;


/// The TextTrackCueList class.
/// [`TextTrackCueList`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCueList)
class TextTrackCueList : public emlite::Val {
    explicit TextTrackCueList(Handle h) noexcept;

public:
    explicit TextTrackCueList(const emlite::Val &val) noexcept;
    static TextTrackCueList take_ownership(Handle h) noexcept;

    [[nodiscard]] TextTrackCueList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`TextTrackCueList.length`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCueList/length)
    [[nodiscard]] unsigned long length() const;
    /// The getCueById method.
    /// [`TextTrackCueList.getCueById`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCueList/getCueById)
    TextTrackCue getCueById(const jsbind::String& id);
};

