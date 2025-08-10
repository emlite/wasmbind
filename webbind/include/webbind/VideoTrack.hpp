#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SourceBuffer;

/// Interface VideoTrack
/// [`VideoTrack`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack)
class VideoTrack : public emlite::Val {
    explicit VideoTrack(Handle h) noexcept;
public:
    explicit VideoTrack(const emlite::Val &val) noexcept;
    static VideoTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`VideoTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/id)
    /// [`VideoTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`VideoTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/kind)
    /// [`VideoTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// [`VideoTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/label)
    /// [`VideoTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// [`VideoTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/language)
    /// [`VideoTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/language)
    [[nodiscard]] jsbind::String language() const;
    /// [`VideoTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/selected)
    /// [`VideoTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/selected)
    [[nodiscard]] bool selected() const;
    /// Setter of the `selected` attribute.
    /// [`VideoTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/selected)
    void selected(bool value);
    /// [`VideoTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/sourceBuffer)
    /// [`VideoTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/sourceBuffer)
    [[nodiscard]] SourceBuffer sourceBuffer() const;
};

} // namespace webbind