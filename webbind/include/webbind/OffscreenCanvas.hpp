#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class ImageBitmap;
class Blob;
class ImageEncodeOptions;


class ImageEncodeOptions : public emlite::Val {
  explicit ImageEncodeOptions(Handle h) noexcept;
public:
    static ImageEncodeOptions take_ownership(Handle h) noexcept;
    explicit ImageEncodeOptions(const emlite::Val &val) noexcept;
    ImageEncodeOptions() noexcept;
    ImageEncodeOptions clone() const noexcept;
    jsbind::String type() const;
    void type(const jsbind::String& value);
    double quality() const;
    void quality(double value);
};

class OffscreenCanvas : public EventTarget {
    explicit OffscreenCanvas(Handle h) noexcept;

public:
    explicit OffscreenCanvas(const emlite::Val &val) noexcept;
    static OffscreenCanvas take_ownership(Handle h) noexcept;

    OffscreenCanvas clone() const noexcept;
    OffscreenCanvas(long long width, long long height);
    long long width() const;
    void width(long long value);
    long long height() const;
    void height(long long value);
    jsbind::Any getContext(const OffscreenRenderingContextId& contextId);
    jsbind::Any getContext(const OffscreenRenderingContextId& contextId, const jsbind::Any& options);
    ImageBitmap transferToImageBitmap();
    jsbind::Promise<Blob> convertToBlob();
    jsbind::Promise<Blob> convertToBlob(const ImageEncodeOptions& options);
    jsbind::Any oncontextlost() const;
    void oncontextlost(const jsbind::Any& value);
    jsbind::Any oncontextrestored() const;
    void oncontextrestored(const jsbind::Any& value);
};

