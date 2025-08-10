#include "webbind/WEBGL_multi_draw.hpp"

namespace webbind {

WEBGL_multi_draw WEBGL_multi_draw::take_ownership(Handle h) noexcept {
        return WEBGL_multi_draw(h);
    }
WEBGL_multi_draw WEBGL_multi_draw::clone() const noexcept { return *this; }
emlite::Val WEBGL_multi_draw::instance() noexcept { return emlite::Val::global("WEBGL_multi_draw"); }
WEBGL_multi_draw::WEBGL_multi_draw(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_multi_draw::WEBGL_multi_draw(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Undefined WEBGL_multi_draw::multiDrawArraysWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& drawcount) {
    return emlite::Val::call("multiDrawArraysWEBGL", mode, firstsList, firstsOffset, countsList, countsOffset, drawcount).as<jsbind::Undefined>();
}

jsbind::Undefined WEBGL_multi_draw::multiDrawElementsWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& drawcount) {
    return emlite::Val::call("multiDrawElementsWEBGL", mode, countsList, countsOffset, type, offsetsList, offsetsOffset, drawcount).as<jsbind::Undefined>();
}

jsbind::Undefined WEBGL_multi_draw::multiDrawArraysInstancedWEBGL(const jsbind::Any& mode, const jsbind::Any& firstsList, long long firstsOffset, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& drawcount) {
    return emlite::Val::call("multiDrawArraysInstancedWEBGL", mode, firstsList, firstsOffset, countsList, countsOffset, instanceCountsList, instanceCountsOffset, drawcount).as<jsbind::Undefined>();
}

jsbind::Undefined WEBGL_multi_draw::multiDrawElementsInstancedWEBGL(const jsbind::Any& mode, const jsbind::Any& countsList, long long countsOffset, const jsbind::Any& type, const jsbind::Any& offsetsList, long long offsetsOffset, const jsbind::Any& instanceCountsList, long long instanceCountsOffset, const jsbind::Any& drawcount) {
    return emlite::Val::call("multiDrawElementsInstancedWEBGL", mode, countsList, countsOffset, type, offsetsList, offsetsOffset, instanceCountsList, instanceCountsOffset, drawcount).as<jsbind::Undefined>();
}


} // namespace webbind