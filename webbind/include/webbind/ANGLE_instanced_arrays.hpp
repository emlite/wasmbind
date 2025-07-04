#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ANGLE_instanced_arrays : public emlite::Val {
    explicit ANGLE_instanced_arrays(Handle h) noexcept;

public:
    explicit ANGLE_instanced_arrays(const emlite::Val &val) noexcept;
    static ANGLE_instanced_arrays take_ownership(Handle h) noexcept;

    ANGLE_instanced_arrays clone() const noexcept;
    jsbind::Undefined drawArraysInstancedANGLE(const jsbind::Any& mode, const jsbind::Any& first, const jsbind::Any& count, const jsbind::Any& primcount);
    jsbind::Undefined drawElementsInstancedANGLE(const jsbind::Any& mode, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset, const jsbind::Any& primcount);
    jsbind::Undefined vertexAttribDivisorANGLE(const jsbind::Any& index, const jsbind::Any& divisor);
};

