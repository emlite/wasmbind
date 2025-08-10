#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface OES_draw_buffers_indexed
/// [`OES_draw_buffers_indexed`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed)
class OES_draw_buffers_indexed : public emlite::Val {
    explicit OES_draw_buffers_indexed(Handle h) noexcept;
public:
    explicit OES_draw_buffers_indexed(const emlite::Val &val) noexcept;
    static OES_draw_buffers_indexed take_ownership(Handle h) noexcept;
    [[nodiscard]] OES_draw_buffers_indexed clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The enableiOES method.
    /// [`OES_draw_buffers_indexed.enableiOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/enableiOES)
    jsbind::Undefined enableiOES(const jsbind::Any& target, const jsbind::Any& index);
    /// The disableiOES method.
    /// [`OES_draw_buffers_indexed.disableiOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/disableiOES)
    jsbind::Undefined disableiOES(const jsbind::Any& target, const jsbind::Any& index);
    /// The blendEquationiOES method.
    /// [`OES_draw_buffers_indexed.blendEquationiOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/blendEquationiOES)
    jsbind::Undefined blendEquationiOES(const jsbind::Any& buf, const jsbind::Any& mode);
    /// The blendEquationSeparateiOES method.
    /// [`OES_draw_buffers_indexed.blendEquationSeparateiOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/blendEquationSeparateiOES)
    jsbind::Undefined blendEquationSeparateiOES(const jsbind::Any& buf, const jsbind::Any& modeRGB, const jsbind::Any& modeAlpha);
    /// The blendFunciOES method.
    /// [`OES_draw_buffers_indexed.blendFunciOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/blendFunciOES)
    jsbind::Undefined blendFunciOES(const jsbind::Any& buf, const jsbind::Any& src, const jsbind::Any& dst);
    /// The blendFuncSeparateiOES method.
    /// [`OES_draw_buffers_indexed.blendFuncSeparateiOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/blendFuncSeparateiOES)
    jsbind::Undefined blendFuncSeparateiOES(const jsbind::Any& buf, const jsbind::Any& srcRGB, const jsbind::Any& dstRGB, const jsbind::Any& srcAlpha, const jsbind::Any& dstAlpha);
    /// The colorMaskiOES method.
    /// [`OES_draw_buffers_indexed.colorMaskiOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed/colorMaskiOES)
    jsbind::Undefined colorMaskiOES(const jsbind::Any& buf, const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b, const jsbind::Any& a);
};

} // namespace webbind