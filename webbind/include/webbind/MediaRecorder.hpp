#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaStream;


class MediaRecorder : public EventTarget {
    explicit MediaRecorder(Handle h) noexcept;

public:
    explicit MediaRecorder(const emlite::Val &val) noexcept;
    static MediaRecorder take_ownership(Handle h) noexcept;

    MediaRecorder clone() const noexcept;
    MediaRecorder(const MediaStream& stream);
    MediaRecorder(const MediaStream& stream, const jsbind::Any& options);
    MediaStream stream() const;
    jsbind::String mimeType() const;
    RecordingState state() const;
    jsbind::Any onstart() const;
    void onstart(const jsbind::Any& value);
    jsbind::Any onstop() const;
    void onstop(const jsbind::Any& value);
    jsbind::Any ondataavailable() const;
    void ondataavailable(const jsbind::Any& value);
    jsbind::Any onpause() const;
    void onpause(const jsbind::Any& value);
    jsbind::Any onresume() const;
    void onresume(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    unsigned long videoBitsPerSecond() const;
    unsigned long audioBitsPerSecond() const;
    BitrateMode audioBitrateMode() const;
    jsbind::Undefined start();
    jsbind::Undefined start(unsigned long timeslice);
    jsbind::Undefined stop();
    jsbind::Undefined pause();
    jsbind::Undefined resume();
    jsbind::Undefined requestData();
    static bool isTypeSupported(const jsbind::String& type);
};

