#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CanvasRenderingContext2DSettings
/// [`CanvasRenderingContext2DSettings`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2DSettings)
class CanvasRenderingContext2DSettings : public emlite::Val {
  explicit CanvasRenderingContext2DSettings(Handle h) noexcept;
public:
    static CanvasRenderingContext2DSettings take_ownership(Handle h) noexcept;
    explicit CanvasRenderingContext2DSettings(const emlite::Val &val) noexcept;
    CanvasRenderingContext2DSettings() noexcept;
    [[nodiscard]] CanvasRenderingContext2DSettings clone() const noexcept;
    [[nodiscard]] bool alpha() const;
    void alpha(bool value);
    [[nodiscard]] bool desynchronized() const;
    void desynchronized(bool value);
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    void colorSpace(const PredefinedColorSpace& value);
    [[nodiscard]] CanvasColorType colorType() const;
    void colorType(const CanvasColorType& value);
    [[nodiscard]] bool willReadFrequently() const;
    void willReadFrequently(bool value);
};

} // namespace webbind