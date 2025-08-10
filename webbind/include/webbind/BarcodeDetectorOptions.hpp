#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BarcodeDetectorOptions
/// [`BarcodeDetectorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetectorOptions)
class BarcodeDetectorOptions : public emlite::Val {
  explicit BarcodeDetectorOptions(Handle h) noexcept;
public:
    static BarcodeDetectorOptions take_ownership(Handle h) noexcept;
    explicit BarcodeDetectorOptions(const emlite::Val &val) noexcept;
    BarcodeDetectorOptions() noexcept;
    [[nodiscard]] BarcodeDetectorOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<BarcodeFormat> formats() const;
    void formats(const jsbind::TypedArray<BarcodeFormat>& value);
};

} // namespace webbind