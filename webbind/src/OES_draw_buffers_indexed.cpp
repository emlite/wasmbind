#include <webbind/OES_draw_buffers_indexed.hpp>

namespace webbind {

OES_draw_buffers_indexed OES_draw_buffers_indexed::take_ownership(Handle h) noexcept {
    return OES_draw_buffers_indexed(h);
}

OES_draw_buffers_indexed OES_draw_buffers_indexed::clone() const noexcept { return *this; }

emlite::Val OES_draw_buffers_indexed::instance() noexcept { return emlite::Val::global("OES_draw_buffers_indexed"); }

OES_draw_buffers_indexed::OES_draw_buffers_indexed(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

OES_draw_buffers_indexed::OES_draw_buffers_indexed(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined OES_draw_buffers_indexed::enableiOES(const uint32_t& target, const jsbind::Any& index) {
    return emlite::Val::call("enableiOES", target, index).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::disableiOES(const uint32_t& target, const jsbind::Any& index) {
    return emlite::Val::call("disableiOES", target, index).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendEquationiOES(const jsbind::Any& buf, const uint32_t& mode) {
    return emlite::Val::call("blendEquationiOES", buf, mode).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendEquationSeparateiOES(const jsbind::Any& buf, const uint32_t& modeRGB, const uint32_t& modeAlpha) {
    return emlite::Val::call("blendEquationSeparateiOES", buf, modeRGB, modeAlpha).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendFunciOES(const jsbind::Any& buf, const uint32_t& src, const uint32_t& dst) {
    return emlite::Val::call("blendFunciOES", buf, src, dst).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::blendFuncSeparateiOES(const jsbind::Any& buf, const uint32_t& srcRGB, const uint32_t& dstRGB, const uint32_t& srcAlpha, const uint32_t& dstAlpha) {
    return emlite::Val::call("blendFuncSeparateiOES", buf, srcRGB, dstRGB, srcAlpha, dstAlpha).as<jsbind::Undefined>();
}

jsbind::Undefined OES_draw_buffers_indexed::colorMaskiOES(const jsbind::Any& buf, bool r, bool g, bool b, bool a) {
    return emlite::Val::call("colorMaskiOES", buf, r, g, b, a).as<jsbind::Undefined>();
}


} // namespace webbind