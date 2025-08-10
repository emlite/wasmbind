#include <webbind/EXT_disjoint_timer_query.hpp>
#include <webbind/WebGLTimerQueryEXT.hpp>

namespace webbind {

EXT_disjoint_timer_query EXT_disjoint_timer_query::take_ownership(Handle h) noexcept {
    return EXT_disjoint_timer_query(h);
}

EXT_disjoint_timer_query EXT_disjoint_timer_query::clone() const noexcept { return *this; }

emlite::Val EXT_disjoint_timer_query::instance() noexcept { return emlite::Val::global("EXT_disjoint_timer_query"); }

EXT_disjoint_timer_query::EXT_disjoint_timer_query(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EXT_disjoint_timer_query::EXT_disjoint_timer_query(const emlite::Val &val) noexcept: emlite::Val(val) {}

WebGLTimerQueryEXT EXT_disjoint_timer_query::createQueryEXT() {
    return emlite::Val::call("createQueryEXT").as<WebGLTimerQueryEXT>();
}

jsbind::Undefined EXT_disjoint_timer_query::deleteQueryEXT(const WebGLTimerQueryEXT& query) {
    return emlite::Val::call("deleteQueryEXT", query).as<jsbind::Undefined>();
}

bool EXT_disjoint_timer_query::isQueryEXT(const WebGLTimerQueryEXT& query) {
    return emlite::Val::call("isQueryEXT", query).as<bool>();
}

jsbind::Undefined EXT_disjoint_timer_query::beginQueryEXT(const jsbind::Any& target, const WebGLTimerQueryEXT& query) {
    return emlite::Val::call("beginQueryEXT", target, query).as<jsbind::Undefined>();
}

jsbind::Undefined EXT_disjoint_timer_query::endQueryEXT(const jsbind::Any& target) {
    return emlite::Val::call("endQueryEXT", target).as<jsbind::Undefined>();
}

jsbind::Undefined EXT_disjoint_timer_query::queryCounterEXT(const WebGLTimerQueryEXT& query, const jsbind::Any& target) {
    return emlite::Val::call("queryCounterEXT", query, target).as<jsbind::Undefined>();
}

jsbind::Any EXT_disjoint_timer_query::getQueryEXT(const jsbind::Any& target, const jsbind::Any& pname) {
    return emlite::Val::call("getQueryEXT", target, pname).as<jsbind::Any>();
}

jsbind::Any EXT_disjoint_timer_query::getQueryObjectEXT(const WebGLTimerQueryEXT& query, const jsbind::Any& pname) {
    return emlite::Val::call("getQueryObjectEXT", query, pname).as<jsbind::Any>();
}


} // namespace webbind