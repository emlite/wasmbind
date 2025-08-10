#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CanvasRenderingContext2DSettings
class CanvasRenderingContext2DSettings : public emlite::Val {
  explicit CanvasRenderingContext2DSettings(Handle h) noexcept;
public:
    static CanvasRenderingContext2DSettings take_ownership(Handle h) noexcept;
    explicit CanvasRenderingContext2DSettings(const emlite::Val &val) noexcept;
    CanvasRenderingContext2DSettings() noexcept;
    [[nodiscard]] CanvasRenderingContext2DSettings clone() const noexcept;
    /// Getter of the `alpha` attribute.
    [[nodiscard]] bool alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(bool value);
    /// Getter of the `desynchronized` attribute.
    [[nodiscard]] bool desynchronized() const;
    /// Setter of the `desynchronized` attribute.
    void desynchronized(bool value);
    /// Getter of the `colorSpace` attribute.
    [[nodiscard]] PredefinedColorSpace colorSpace() const;
    /// Setter of the `colorSpace` attribute.
    void colorSpace(const PredefinedColorSpace& value);
    /// Getter of the `colorType` attribute.
    [[nodiscard]] CanvasColorType colorType() const;
    /// Setter of the `colorType` attribute.
    void colorType(const CanvasColorType& value);
    /// Getter of the `willReadFrequently` attribute.
    [[nodiscard]] bool willReadFrequently() const;
    /// Setter of the `willReadFrequently` attribute.
    void willReadFrequently(bool value);
};

} // namespace webbind