#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUProgrammableStage.hpp"
#include "GPUColorTargetState.hpp"

namespace webbind {

/// Dictionary type GPUFragmentState
/// [`GPUFragmentState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFragmentState)
class GPUFragmentState : public GPUProgrammableStage {
  explicit GPUFragmentState(Handle h) noexcept;
public:
    static GPUFragmentState take_ownership(Handle h) noexcept;
    explicit GPUFragmentState(const emlite::Val &val) noexcept;
    GPUFragmentState() noexcept;
    [[nodiscard]] GPUFragmentState clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUColorTargetState> targets() const;
    void targets(const jsbind::TypedArray<GPUColorTargetState>& value);
};

} // namespace webbind