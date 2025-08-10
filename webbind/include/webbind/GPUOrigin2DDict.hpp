#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUOrigin2DDict
class GPUOrigin2DDict : public emlite::Val {
  explicit GPUOrigin2DDict(Handle h) noexcept;
public:
    static GPUOrigin2DDict take_ownership(Handle h) noexcept;
    explicit GPUOrigin2DDict(const emlite::Val &val) noexcept;
    GPUOrigin2DDict() noexcept;
    [[nodiscard]] GPUOrigin2DDict clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] jsbind::Any x() const;
    /// Setter of the `x` attribute.
    void x(const jsbind::Any& value);
    /// Getter of the `y` attribute.
    [[nodiscard]] jsbind::Any y() const;
    /// Setter of the `y` attribute.
    void y(const jsbind::Any& value);
};

} // namespace webbind