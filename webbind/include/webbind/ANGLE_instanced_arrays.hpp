#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ANGLE_instanced_arrays
/// [`ANGLE_instanced_arrays`](https://developer.mozilla.org/en-US/docs/Web/API/ANGLE_instanced_arrays)
class ANGLE_instanced_arrays : public emlite::Val {
    explicit ANGLE_instanced_arrays(Handle h) noexcept;
public:
    explicit ANGLE_instanced_arrays(const emlite::Val &val) noexcept;
    static ANGLE_instanced_arrays take_ownership(Handle h) noexcept;
    [[nodiscard]] ANGLE_instanced_arrays clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The drawArraysInstancedANGLE method.
    /// [`ANGLE_instanced_arrays.drawArraysInstancedANGLE`](https://developer.mozilla.org/en-US/docs/Web/API/ANGLE_instanced_arrays/drawArraysInstancedANGLE)
    jsbind::Undefined drawArraysInstancedANGLE(const uint32_t& mode, int first, int count, int primcount);
    /// The drawElementsInstancedANGLE method.
    /// [`ANGLE_instanced_arrays.drawElementsInstancedANGLE`](https://developer.mozilla.org/en-US/docs/Web/API/ANGLE_instanced_arrays/drawElementsInstancedANGLE)
    jsbind::Undefined drawElementsInstancedANGLE(const uint32_t& mode, int count, const uint32_t& type, const intptr_t& offset, int primcount);
    /// The vertexAttribDivisorANGLE method.
    /// [`ANGLE_instanced_arrays.vertexAttribDivisorANGLE`](https://developer.mozilla.org/en-US/docs/Web/API/ANGLE_instanced_arrays/vertexAttribDivisorANGLE)
    jsbind::Undefined vertexAttribDivisorANGLE(const jsbind::Any& index, const jsbind::Any& divisor);
};

} // namespace webbind