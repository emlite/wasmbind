#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SourceBuffer;


/// The AudioTrack class.
/// [`AudioTrack`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack)
class AudioTrack : public emlite::Val {
    explicit AudioTrack(Handle h) noexcept;

public:
    explicit AudioTrack(const emlite::Val &val) noexcept;
    static AudioTrack take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioTrack clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `id` attribute.
    /// [`AudioTrack.id`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/id)
    [[nodiscard]] jsbind::String id() const;
    /// Getter of the `kind` attribute.
    /// [`AudioTrack.kind`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/kind)
    [[nodiscard]] jsbind::String kind() const;
    /// Getter of the `label` attribute.
    /// [`AudioTrack.label`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/label)
    [[nodiscard]] jsbind::String label() const;
    /// Getter of the `language` attribute.
    /// [`AudioTrack.language`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/language)
    [[nodiscard]] jsbind::String language() const;
    /// Getter of the `enabled` attribute.
    /// [`AudioTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/enabled)
    [[nodiscard]] bool enabled() const;
    /// Setter of the `enabled` attribute.
    /// [`AudioTrack.enabled`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/enabled)
    void enabled(bool value);
    /// Getter of the `sourceBuffer` attribute.
    /// [`AudioTrack.sourceBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack/sourceBuffer)
    [[nodiscard]] SourceBuffer sourceBuffer() const;
};

