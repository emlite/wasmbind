#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUOrigin2DDict
/// [`GPUOrigin2DDict`](https://developer.mozilla.org/en-US/docs/Web/API/GPUOrigin2DDict)
class GPUOrigin2DDict : public emlite::Val {
  explicit GPUOrigin2DDict(Handle h) noexcept;
public:
    static GPUOrigin2DDict take_ownership(Handle h) noexcept;
    explicit GPUOrigin2DDict(const emlite::Val &val) noexcept;
    GPUOrigin2DDict() noexcept;
    [[nodiscard]] GPUOrigin2DDict clone() const noexcept;
    [[nodiscard]] jsbind::Any x() const;
    void x(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any y() const;
    void y(const jsbind::Any& value);
};

} // namespace webbind