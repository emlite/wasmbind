#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "BaseAudioContext.hpp"
#include "enums.hpp"

class AudioBuffer;


/// The OfflineAudioContext class.
/// [`OfflineAudioContext`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext)
class OfflineAudioContext : public BaseAudioContext {
    explicit OfflineAudioContext(Handle h) noexcept;

public:
    explicit OfflineAudioContext(const emlite::Val &val) noexcept;
    static OfflineAudioContext take_ownership(Handle h) noexcept;

    [[nodiscard]] OfflineAudioContext clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new OfflineAudioContext(..)` constructor, creating a new OfflineAudioContext instance
    OfflineAudioContext(unsigned long numberOfChannels, unsigned long length, float sampleRate);
    /// The startRendering method.
    /// [`OfflineAudioContext.startRendering`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext/startRendering)
    jsbind::Promise<AudioBuffer> startRendering();
    /// The resume method.
    /// [`OfflineAudioContext.resume`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext/resume)
    jsbind::Promise<jsbind::Undefined> resume();
    /// The suspend method.
    /// [`OfflineAudioContext.suspend`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext/suspend)
    jsbind::Promise<jsbind::Undefined> suspend(double suspendTime);
    /// Getter of the `length` attribute.
    /// [`OfflineAudioContext.length`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `oncomplete` attribute.
    /// [`OfflineAudioContext.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext/oncomplete)
    [[nodiscard]] jsbind::Any oncomplete() const;
    /// Setter of the `oncomplete` attribute.
    /// [`OfflineAudioContext.oncomplete`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContext/oncomplete)
    void oncomplete(const jsbind::Any& value);
};

