#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ImageTrack;

/// Interface ImageTrackList
/// [`ImageTrackList`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrackList)
class ImageTrackList : public emlite::Val {
    explicit ImageTrackList(Handle h) noexcept;
public:
    explicit ImageTrackList(const emlite::Val &val) noexcept;
    static ImageTrackList take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageTrackList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `ready` attribute.
    /// [`ImageTrackList.ready`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrackList/ready)
    [[nodiscard]] jsbind::Promise<jsbind::Undefined> ready() const;
    /// Getter of the `length` attribute.
    /// [`ImageTrackList.length`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrackList/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `selectedIndex` attribute.
    /// [`ImageTrackList.selectedIndex`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrackList/selectedIndex)
    [[nodiscard]] long selectedIndex() const;
    /// Getter of the `selectedTrack` attribute.
    /// [`ImageTrackList.selectedTrack`](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrackList/selectedTrack)
    [[nodiscard]] ImageTrack selectedTrack() const;
};

} // namespace webbind