#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUOrigin3DDict
/// [`GPUOrigin3DDict`](https://developer.mozilla.org/en-US/docs/Web/API/GPUOrigin3DDict)
class GPUOrigin3DDict : public emlite::Val {
  explicit GPUOrigin3DDict(Handle h) noexcept;
public:
    static GPUOrigin3DDict take_ownership(Handle h) noexcept;
    explicit GPUOrigin3DDict(const emlite::Val &val) noexcept;
    GPUOrigin3DDict() noexcept;
    [[nodiscard]] GPUOrigin3DDict clone() const noexcept;
    [[nodiscard]] jsbind::Any x() const;
    void x(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any y() const;
    void y(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any z() const;
    void z(const jsbind::Any& value);
};

} // namespace webbind