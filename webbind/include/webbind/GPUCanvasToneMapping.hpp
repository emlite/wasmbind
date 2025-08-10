#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUCanvasToneMapping
/// [`GPUCanvasToneMapping`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasToneMapping)
class GPUCanvasToneMapping : public emlite::Val {
  explicit GPUCanvasToneMapping(Handle h) noexcept;
public:
    static GPUCanvasToneMapping take_ownership(Handle h) noexcept;
    explicit GPUCanvasToneMapping(const emlite::Val &val) noexcept;
    GPUCanvasToneMapping() noexcept;
    [[nodiscard]] GPUCanvasToneMapping clone() const noexcept;
    [[nodiscard]] GPUCanvasToneMappingMode mode() const;
    void mode(const GPUCanvasToneMappingMode& value);
};

} // namespace webbind