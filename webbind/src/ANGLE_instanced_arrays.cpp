#include <webbind/ANGLE_instanced_arrays.hpp>


ANGLE_instanced_arrays ANGLE_instanced_arrays::take_ownership(Handle h) noexcept {
        return ANGLE_instanced_arrays(h);
    }
ANGLE_instanced_arrays ANGLE_instanced_arrays::clone() const noexcept { return *this; }
ANGLE_instanced_arrays::ANGLE_instanced_arrays(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ANGLE_instanced_arrays::ANGLE_instanced_arrays(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined ANGLE_instanced_arrays::drawArraysInstancedANGLE(const jsbind::Any& mode, const jsbind::Any& first, const jsbind::Any& count, const jsbind::Any& primcount) {
    return emlite::Val::call("drawArraysInstancedANGLE", mode, first, count, primcount).as<jsbind::Undefined>();
}

jsbind::Undefined ANGLE_instanced_arrays::drawElementsInstancedANGLE(const jsbind::Any& mode, const jsbind::Any& count, const jsbind::Any& type, const jsbind::Any& offset, const jsbind::Any& primcount) {
    return emlite::Val::call("drawElementsInstancedANGLE", mode, count, type, offset, primcount).as<jsbind::Undefined>();
}

jsbind::Undefined ANGLE_instanced_arrays::vertexAttribDivisorANGLE(const jsbind::Any& index, const jsbind::Any& divisor) {
    return emlite::Val::call("vertexAttribDivisorANGLE", index, divisor).as<jsbind::Undefined>();
}

