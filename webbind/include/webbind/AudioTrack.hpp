#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SourceBuffer;

/// Interface AudioTrack
/// [`AudioTrack`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack)
class AudioTrack : public emlite::Val {
    explicit AudioTrack(Handle h) noexcept;
public:
    explicit AudioTrack(const emlite::Val &val) noexcept;
    static AudioTrack take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`AudioTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/id)
    /// [`AudioTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// [`AudioTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/kind)
    /// [`AudioTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// [`AudioTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/label)
    /// [`AudioTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// [`AudioTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/language)
    /// [`AudioTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/language)
    [[nodiscard]] jsbind::String language() const;
    /// [`AudioTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/enabled)
    /// [`AudioTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/enabled)
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    /// [`AudioTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/enabled)
    void enabled(bool value);
    /// [`AudioTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/sourceBuffer)
    /// [`AudioTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/sourceBuffer)
    [[nodiscard]] SourceBuffer sourceBuffer() const;
};

} // namespace webbind