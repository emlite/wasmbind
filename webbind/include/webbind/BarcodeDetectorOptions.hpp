#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BarcodeDetectorOptions
class BarcodeDetectorOptions : public emlite::Val {
  explicit BarcodeDetectorOptions(Handle h) noexcept;
public:
    static BarcodeDetectorOptions take_ownership(Handle h) noexcept;
    explicit BarcodeDetectorOptions(const emlite::Val &val) noexcept;
    BarcodeDetectorOptions() noexcept;
    [[nodiscard]] BarcodeDetectorOptions clone() const noexcept;
    /// Getter of the `formats` attribute.
    [[nodiscard]] jsbind::TypedArray<BarcodeFormat> formats() const;
    /// Setter of the `formats` attribute.
    void formats(const jsbind::TypedArray<BarcodeFormat>& value);
};

} // namespace webbind