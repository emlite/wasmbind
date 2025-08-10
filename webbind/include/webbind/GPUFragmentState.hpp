#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUProgrammableStage.hpp"
#include "GPUColorTargetState.hpp"

namespace webbind {

/// Dictionary type GPUFragmentState
class GPUFragmentState : public GPUProgrammableStage {
  explicit GPUFragmentState(Handle h) noexcept;
public:
    static GPUFragmentState take_ownership(Handle h) noexcept;
    explicit GPUFragmentState(const emlite::Val &val) noexcept;
    GPUFragmentState() noexcept;
    [[nodiscard]] GPUFragmentState clone() const noexcept;
    /// Getter of the `targets` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUColorTargetState> targets() const;
    /// Setter of the `targets` attribute.
    void targets(const jsbind::TypedArray<GPUColorTargetState>& value);
};

} // namespace webbind