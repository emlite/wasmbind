#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaStreamTrack;
class MediaTrackCapabilities;
class MediaTrackConstraints;
class MediaTrackSettings;
class CaptureHandle;


class MediaTrackCapabilities : public emlite::Val {
  explicit MediaTrackCapabilities(Handle h) noexcept;
public:
    static MediaTrackCapabilities take_ownership(Handle h) noexcept;
    explicit MediaTrackCapabilities(const emlite::Val &val) noexcept;
    MediaTrackCapabilities() noexcept;
    MediaTrackCapabilities clone() const noexcept;
    jsbind::DOMString displaySurface() const;
    void displaySurface(const jsbind::DOMString& value);
    bool logicalSurface() const;
    void logicalSurface(bool value);
    jsbind::Sequence<jsbind::DOMString> cursor() const;
    void cursor(const jsbind::Sequence<jsbind::DOMString>& value);
};

class MediaTrackConstraints : public emlite::Val {
  explicit MediaTrackConstraints(Handle h) noexcept;
public:
    static MediaTrackConstraints take_ownership(Handle h) noexcept;
    explicit MediaTrackConstraints(const emlite::Val &val) noexcept;
    MediaTrackConstraints() noexcept;
    MediaTrackConstraints clone() const noexcept;
    jsbind::Sequence<jsbind::Any> advanced() const;
    void advanced(const jsbind::Sequence<jsbind::Any>& value);
};

class MediaTrackSettings : public emlite::Val {
  explicit MediaTrackSettings(Handle h) noexcept;
public:
    static MediaTrackSettings take_ownership(Handle h) noexcept;
    explicit MediaTrackSettings(const emlite::Val &val) noexcept;
    MediaTrackSettings() noexcept;
    MediaTrackSettings clone() const noexcept;
    jsbind::DOMString displaySurface() const;
    void displaySurface(const jsbind::DOMString& value);
    bool logicalSurface() const;
    void logicalSurface(bool value);
    jsbind::DOMString cursor() const;
    void cursor(const jsbind::DOMString& value);
    bool restrictOwnAudio() const;
    void restrictOwnAudio(bool value);
    bool suppressLocalAudioPlayback() const;
    void suppressLocalAudioPlayback(bool value);
    double screenPixelRatio() const;
    void screenPixelRatio(double value);
};

class CaptureHandle : public emlite::Val {
  explicit CaptureHandle(Handle h) noexcept;
public:
    static CaptureHandle take_ownership(Handle h) noexcept;
    explicit CaptureHandle(const emlite::Val &val) noexcept;
    CaptureHandle() noexcept;
    CaptureHandle clone() const noexcept;
    jsbind::DOMString origin() const;
    void origin(const jsbind::DOMString& value);
    jsbind::DOMString handle() const;
    void handle(const jsbind::DOMString& value);
};

class MediaStreamTrack : public EventTarget {
    explicit MediaStreamTrack(Handle h) noexcept;

public:
    explicit MediaStreamTrack(const emlite::Val &val) noexcept;
    static MediaStreamTrack take_ownership(Handle h) noexcept;

    MediaStreamTrack clone() const noexcept;
    jsbind::DOMString kind() const;
    jsbind::DOMString id() const;
    jsbind::DOMString label() const;
    bool enabled() const;
    void enabled(bool value);
    bool muted() const;
    jsbind::Any onmute() const;
    void onmute(const jsbind::Any& value);
    jsbind::Any onunmute() const;
    void onunmute(const jsbind::Any& value);
    MediaStreamTrackState readyState() const;
    jsbind::Any onended() const;
    void onended(const jsbind::Any& value);
    MediaStreamTrack clone();
    jsbind::Undefined stop();
    MediaTrackCapabilities getCapabilities();
    MediaTrackConstraints getConstraints();
    MediaTrackSettings getSettings();
    jsbind::Promise applyConstraints();
    jsbind::Promise applyConstraints(const MediaTrackConstraints& constraints);
    CaptureHandle getCaptureHandle();
    jsbind::Any oncapturehandlechange() const;
    void oncapturehandlechange(const jsbind::Any& value);
    jsbind::Sequence<jsbind::DOMString> getSupportedCaptureActions();
    jsbind::Promise sendCaptureAction(const CaptureAction& action);
    jsbind::DOMString contentHint() const;
    void contentHint(const jsbind::DOMString& value);
    bool isolated() const;
    jsbind::Any onisolationchange() const;
    void onisolationchange(const jsbind::Any& value);
};

