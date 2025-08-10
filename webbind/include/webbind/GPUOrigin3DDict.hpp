#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUOrigin3DDict
class GPUOrigin3DDict : public emlite::Val {
  explicit GPUOrigin3DDict(Handle h) noexcept;
public:
    static GPUOrigin3DDict take_ownership(Handle h) noexcept;
    explicit GPUOrigin3DDict(const emlite::Val &val) noexcept;
    GPUOrigin3DDict() noexcept;
    [[nodiscard]] GPUOrigin3DDict clone() const noexcept;
    /// Getter of the `x` attribute.
    [[nodiscard]] jsbind::Any x() const;
    /// Setter of the `x` attribute.
    void x(const jsbind::Any& value);
    /// Getter of the `y` attribute.
    [[nodiscard]] jsbind::Any y() const;
    /// Setter of the `y` attribute.
    void y(const jsbind::Any& value);
    /// Getter of the `z` attribute.
    [[nodiscard]] jsbind::Any z() const;
    /// Setter of the `z` attribute.
    void z(const jsbind::Any& value);
};

} // namespace webbind