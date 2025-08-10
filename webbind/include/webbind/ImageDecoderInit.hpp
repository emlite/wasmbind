#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ImageDecoderInit
class ImageDecoderInit : public emlite::Val {
  explicit ImageDecoderInit(Handle h) noexcept;
public:
    static ImageDecoderInit take_ownership(Handle h) noexcept;
    explicit ImageDecoderInit(const emlite::Val &val) noexcept;
    ImageDecoderInit() noexcept;
    [[nodiscard]] ImageDecoderInit clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Any data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Any& value);
    /// Getter of the `colorSpaceConversion` attribute.
    [[nodiscard]] ColorSpaceConversion colorSpaceConversion() const;
    /// Setter of the `colorSpaceConversion` attribute.
    void colorSpaceConversion(const ColorSpaceConversion& value);
    /// Getter of the `desiredWidth` attribute.
    [[nodiscard]] unsigned long desiredWidth() const;
    /// Setter of the `desiredWidth` attribute.
    void desiredWidth(unsigned long value);
    /// Getter of the `desiredHeight` attribute.
    [[nodiscard]] unsigned long desiredHeight() const;
    /// Setter of the `desiredHeight` attribute.
    void desiredHeight(unsigned long value);
    /// Getter of the `preferAnimation` attribute.
    [[nodiscard]] bool preferAnimation() const;
    /// Setter of the `preferAnimation` attribute.
    void preferAnimation(bool value);
    /// Getter of the `transfer` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::ArrayBuffer> transfer() const;
    /// Setter of the `transfer` attribute.
    void transfer(const jsbind::TypedArray<jsbind::ArrayBuffer>& value);
};

} // namespace webbind