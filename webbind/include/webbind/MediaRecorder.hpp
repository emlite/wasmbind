#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaStream;


/// The MediaRecorder class.
/// [`MediaRecorder`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder)
class MediaRecorder : public EventTarget {
    explicit MediaRecorder(Handle h) noexcept;

public:
    explicit MediaRecorder(const emlite::Val &val) noexcept;
    static MediaRecorder take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaRecorder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaRecorder(..)` constructor, creating a new MediaRecorder instance
    MediaRecorder(const MediaStream& stream);
    /// The `new MediaRecorder(..)` constructor, creating a new MediaRecorder instance
    MediaRecorder(const MediaStream& stream, const jsbind::Any& options);
    /// Getter of the `stream` attribute.
    /// [`MediaRecorder.stream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/stream)
    [[nodiscard]] MediaStream stream() const;
    /// Getter of the `mimeType` attribute.
    /// [`MediaRecorder.mimeType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/mimeType)
    [[nodiscard]] jsbind::String mimeType() const;
    /// Getter of the `state` attribute.
    /// [`MediaRecorder.state`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/state)
    [[nodiscard]] RecordingState state() const;
    /// Getter of the `onstart` attribute.
    /// [`MediaRecorder.onstart`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onstart)
    [[nodiscard]] jsbind::Any onstart() const;
    /// Setter of the `onstart` attribute.
    /// [`MediaRecorder.onstart`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onstart)
    void onstart(const jsbind::Any& value);
    /// Getter of the `onstop` attribute.
    /// [`MediaRecorder.onstop`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onstop)
    [[nodiscard]] jsbind::Any onstop() const;
    /// Setter of the `onstop` attribute.
    /// [`MediaRecorder.onstop`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onstop)
    void onstop(const jsbind::Any& value);
    /// Getter of the `ondataavailable` attribute.
    /// [`MediaRecorder.ondataavailable`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/ondataavailable)
    [[nodiscard]] jsbind::Any ondataavailable() const;
    /// Setter of the `ondataavailable` attribute.
    /// [`MediaRecorder.ondataavailable`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/ondataavailable)
    void ondataavailable(const jsbind::Any& value);
    /// Getter of the `onpause` attribute.
    /// [`MediaRecorder.onpause`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onpause)
    [[nodiscard]] jsbind::Any onpause() const;
    /// Setter of the `onpause` attribute.
    /// [`MediaRecorder.onpause`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onpause)
    void onpause(const jsbind::Any& value);
    /// Getter of the `onresume` attribute.
    /// [`MediaRecorder.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onresume)
    [[nodiscard]] jsbind::Any onresume() const;
    /// Setter of the `onresume` attribute.
    /// [`MediaRecorder.onresume`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onresume)
    void onresume(const jsbind::Any& value);
    /// Getter of the `onerror` attribute.
    /// [`MediaRecorder.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onerror)
    [[nodiscard]] jsbind::Any onerror() const;
    /// Setter of the `onerror` attribute.
    /// [`MediaRecorder.onerror`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/onerror)
    void onerror(const jsbind::Any& value);
    /// Getter of the `videoBitsPerSecond` attribute.
    /// [`MediaRecorder.videoBitsPerSecond`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/videoBitsPerSecond)
    [[nodiscard]] unsigned long videoBitsPerSecond() const;
    /// Getter of the `audioBitsPerSecond` attribute.
    /// [`MediaRecorder.audioBitsPerSecond`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/audioBitsPerSecond)
    [[nodiscard]] unsigned long audioBitsPerSecond() const;
    /// Getter of the `audioBitrateMode` attribute.
    /// [`MediaRecorder.audioBitrateMode`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/audioBitrateMode)
    [[nodiscard]] BitrateMode audioBitrateMode() const;
    /// The start method.
    /// [`MediaRecorder.start`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/start)
    jsbind::Undefined start();
    /// The start method.
    /// [`MediaRecorder.start`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/start)
    jsbind::Undefined start(unsigned long timeslice);
    /// The stop method.
    /// [`MediaRecorder.stop`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/stop)
    jsbind::Undefined stop();
    /// The pause method.
    /// [`MediaRecorder.pause`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/pause)
    jsbind::Undefined pause();
    /// The resume method.
    /// [`MediaRecorder.resume`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/resume)
    jsbind::Undefined resume();
    /// The requestData method.
    /// [`MediaRecorder.requestData`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/requestData)
    jsbind::Undefined requestData();
    /// The isTypeSupported method.
    /// [`MediaRecorder.isTypeSupported`](https://developer.mozilla.org/en-US/docs/Web/API/MediaRecorder/isTypeSupported)
    static bool isTypeSupported(const jsbind::String& type);
};

