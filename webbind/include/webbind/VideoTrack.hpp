#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SourceBuffer;


/// The VideoTrack class.
/// [`VideoTrack`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack)
class VideoTrack : public emlite::Val {
    explicit VideoTrack(Handle h) noexcept;

public:
    explicit VideoTrack(const emlite::Val &val) noexcept;
    static VideoTrack take_ownership(Handle h) noexcept;

    [[nodiscard]] VideoTrack clone() const noexcept;
    /// Getter of the `id` attribute.
    /// [`VideoTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `kind` attribute.
    /// [`VideoTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// Getter of the `label` attribute.
    /// [`VideoTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// Getter of the `language` attribute.
    /// [`VideoTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/language)
    [[nodiscard]] jsbind::String language() const;
    /// Getter of the `selected` attribute.
    /// [`VideoTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/selected)
    [[nodiscard]] bool selected() const;
    /// Setter of the `selected` attribute.
    /// [`VideoTrack.selected`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/selected)
    void selected(bool value);
    /// Getter of the `sourceBuffer` attribute.
    /// [`VideoTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTrack/sourceBuffer)
    [[nodiscard]] SourceBuffer sourceBuffer() const;
};

