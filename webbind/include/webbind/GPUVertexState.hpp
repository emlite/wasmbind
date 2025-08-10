#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUProgrammableStage.hpp"
#include "GPUVertexBufferLayout.hpp"

namespace webbind {

/// Dictionary type GPUVertexState
/// [`GPUVertexState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexState)
class GPUVertexState : public GPUProgrammableStage {
  explicit GPUVertexState(Handle h) noexcept;
public:
    static GPUVertexState take_ownership(Handle h) noexcept;
    explicit GPUVertexState(const emlite::Val &val) noexcept;
    GPUVertexState() noexcept;
    [[nodiscard]] GPUVertexState clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<GPUVertexBufferLayout> buffers() const;
    void buffers(const jsbind::TypedArray<GPUVertexBufferLayout>& value);
};

} // namespace webbind