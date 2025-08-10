#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "GPUProgrammableStage.hpp"

namespace webbind {

class GPUVertexBufferLayout;

/// Dictionary type GPUVertexState
class GPUVertexState : public GPUProgrammableStage {
  explicit GPUVertexState(Handle h) noexcept;
public:
    static GPUVertexState take_ownership(Handle h) noexcept;
    explicit GPUVertexState(const emlite::Val &val) noexcept;
    GPUVertexState() noexcept;
    [[nodiscard]] GPUVertexState clone() const noexcept;
    /// Getter of the `buffers` attribute.
    [[nodiscard]] jsbind::TypedArray<GPUVertexBufferLayout> buffers() const;
    /// Setter of the `buffers` attribute.
    void buffers(const jsbind::TypedArray<GPUVertexBufferLayout>& value);
};

} // namespace webbind