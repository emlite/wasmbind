#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUBindGroupEntry
class GPUBindGroupEntry : public emlite::Val {
  explicit GPUBindGroupEntry(Handle h) noexcept;
public:
    static GPUBindGroupEntry take_ownership(Handle h) noexcept;
    explicit GPUBindGroupEntry(const emlite::Val &val) noexcept;
    GPUBindGroupEntry() noexcept;
    [[nodiscard]] GPUBindGroupEntry clone() const noexcept;
    /// Getter of the `binding` attribute.
    [[nodiscard]] jsbind::Any binding() const;
    /// Setter of the `binding` attribute.
    void binding(const jsbind::Any& value);
    /// Getter of the `resource` attribute.
    [[nodiscard]] jsbind::Any resource() const;
    /// Setter of the `resource` attribute.
    void resource(const jsbind::Any& value);
};

} // namespace webbind