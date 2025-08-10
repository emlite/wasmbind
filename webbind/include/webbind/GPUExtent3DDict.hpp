#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUExtent3DDict
/// [`GPUExtent3DDict`](https://developer.mozilla.org/en-US/docs/Web/API/GPUExtent3DDict)
class GPUExtent3DDict : public emlite::Val {
  explicit GPUExtent3DDict(Handle h) noexcept;
public:
    static GPUExtent3DDict take_ownership(Handle h) noexcept;
    explicit GPUExtent3DDict(const emlite::Val &val) noexcept;
    GPUExtent3DDict() noexcept;
    [[nodiscard]] GPUExtent3DDict clone() const noexcept;
    [[nodiscard]] jsbind::Any width() const;
    void width(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any height() const;
    void height(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any depthOrArrayLayers() const;
    void depthOrArrayLayers(const jsbind::Any& value);
};

} // namespace webbind