#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageDecoderInit
/// [`ImageDecoderInit`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDecoderInit)
class ImageDecoderInit : public emlite::Val {
  explicit ImageDecoderInit(Handle h) noexcept;
public:
    static ImageDecoderInit take_ownership(Handle h) noexcept;
    explicit ImageDecoderInit(const emlite::Val &val) noexcept;
    ImageDecoderInit() noexcept;
    [[nodiscard]] ImageDecoderInit clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
    [[nodiscard]] ColorSpaceConversion colorSpaceConversion() const;
    void colorSpaceConversion(const ColorSpaceConversion& value);
    [[nodiscard]] unsigned long desiredWidth() const;
    void desiredWidth(unsigned long value);
    [[nodiscard]] unsigned long desiredHeight() const;
    void desiredHeight(unsigned long value);
    [[nodiscard]] bool preferAnimation() const;
    void preferAnimation(bool value);
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
};

} // namespace webbind