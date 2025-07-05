#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ImageTrackList;
class ImageDecodeResult;
class ImageDecodeOptions;
class VideoFrame;


class ImageDecodeResult : public emlite::Val {
  explicit ImageDecodeResult(Handle h) noexcept;
public:
    static ImageDecodeResult take_ownership(Handle h) noexcept;
    explicit ImageDecodeResult(const emlite::Val &val) noexcept;
    ImageDecodeResult() noexcept;
    ImageDecodeResult clone() const noexcept;
    VideoFrame image() const;
    void image(const VideoFrame& value);
    bool complete() const;
    void complete(bool value);
};

class ImageDecodeOptions : public emlite::Val {
  explicit ImageDecodeOptions(Handle h) noexcept;
public:
    static ImageDecodeOptions take_ownership(Handle h) noexcept;
    explicit ImageDecodeOptions(const emlite::Val &val) noexcept;
    ImageDecodeOptions() noexcept;
    ImageDecodeOptions clone() const noexcept;
    unsigned long frameIndex() const;
    void frameIndex(unsigned long value);
    bool completeFramesOnly() const;
    void completeFramesOnly(bool value);
};

class ImageDecoder : public emlite::Val {
    explicit ImageDecoder(Handle h) noexcept;

public:
    explicit ImageDecoder(const emlite::Val &val) noexcept;
    static ImageDecoder take_ownership(Handle h) noexcept;

    ImageDecoder clone() const noexcept;
    ImageDecoder(const jsbind::Any& init);
    jsbind::DOMString type() const;
    bool complete() const;
    jsbind::Promise completed() const;
    ImageTrackList tracks() const;
    jsbind::Promise decode();
    jsbind::Promise decode(const ImageDecodeOptions& options);
    jsbind::Undefined reset();
    jsbind::Undefined close();
    static jsbind::Promise isTypeSupported(const jsbind::DOMString& type);
};

