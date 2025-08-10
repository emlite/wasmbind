#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUMultisampleState
class GPUMultisampleState : public emlite::Val {
  explicit GPUMultisampleState(Handle h) noexcept;
public:
    static GPUMultisampleState take_ownership(Handle h) noexcept;
    explicit GPUMultisampleState(const emlite::Val &val) noexcept;
    GPUMultisampleState() noexcept;
    [[nodiscard]] GPUMultisampleState clone() const noexcept;
    /// Getter of the `count` attribute.
    [[nodiscard]] jsbind::Any count() const;
    /// Setter of the `count` attribute.
    void count(const jsbind::Any& value);
    /// Getter of the `mask` attribute.
    [[nodiscard]] jsbind::Any mask() const;
    /// Setter of the `mask` attribute.
    void mask(const jsbind::Any& value);
    /// Getter of the `alphaToCoverageEnabled` attribute.
    [[nodiscard]] bool alphaToCoverageEnabled() const;
    /// Setter of the `alphaToCoverageEnabled` attribute.
    void alphaToCoverageEnabled(bool value);
};

} // namespace webbind