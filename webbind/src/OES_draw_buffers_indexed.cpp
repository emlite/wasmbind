#include "webbind/OES_draw_buffers_indexed.hpp"

namespace webbind {

OES_draw_buffers_indexed OES_draw_buffers_indexed::take_ownership(Handle h) noexcept {
        return OES_draw_buffers_indexed(h);
    }
OES_draw_buffers_indexed OES_draw_buffers_indexed::clone() const noexcept { return *this; }
emlite::Val OES_draw_buffers_indexed::instance() noexcept { return emlite::Val::global("OES_draw_buffers_indexed"); }
OES_draw_buffers_indexed::OES_draw_buffers_indexed(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_draw_buffers_indexed::OES_draw_buffers_indexed(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined OES_draw_buffers_indexed::enableiOES(const jsbind::Any& target, const jsbind::Any& index) {
    return emlite::Val::call("enableiOES", target, index).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::disableiOES(const jsbind::Any& target, const jsbind::Any& index) {
    return emlite::Val::call("disableiOES", target, index).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendEquationiOES(const jsbind::Any& buf, const jsbind::Any& mode) {
    return emlite::Val::call("blendEquationiOES", buf, mode).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendEquationSeparateiOES(const jsbind::Any& buf, const jsbind::Any& modeRGB, const jsbind::Any& modeAlpha) {
    return emlite::Val::call("blendEquationSeparateiOES", buf, modeRGB, modeAlpha).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendFunciOES(const jsbind::Any& buf, const jsbind::Any& src, const jsbind::Any& dst) {
    return emlite::Val::call("blendFunciOES", buf, src, dst).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendFuncSeparateiOES(const jsbind::Any& buf, const jsbind::Any& srcRGB, const jsbind::Any& dstRGB, const jsbind::Any& srcAlpha, const jsbind::Any& dstAlpha) {
    return emlite::Val::call("blendFuncSeparateiOES", buf, srcRGB, dstRGB, srcAlpha, dstAlpha).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::colorMaskiOES(const jsbind::Any& buf, const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b, const jsbind::Any& a) {
    return emlite::Val::call("colorMaskiOES", buf, r, g, b, a).as<jsbind::Undefined>();
}


} // namespace webbind