#include <webbind/RouterCondition.hpp>

namespace webbind {

RouterCondition::RouterCondition(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RouterCondition RouterCondition::take_ownership(Handle h) noexcept {
    return RouterCondition(h);
}

RouterCondition::RouterCondition(const emlite::Val &val) noexcept: emlite::Val(val) {}

RouterCondition::RouterCondition() noexcept: emlite::Val(emlite::Val::object()) {}

RouterCondition RouterCondition::clone() const noexcept { return *this; }

jsbind::Any RouterCondition::urlPattern() const {
    return emlite::Val::get("urlPattern").as<jsbind::Any>();
}

void RouterCondition::urlPattern(const jsbind::Any& value) {
    emlite::Val::set("urlPattern", value);
}

jsbind::String RouterCondition::requestMethod() const {
    return emlite::Val::get("requestMethod").as<jsbind::String>();
}

void RouterCondition::requestMethod(const jsbind::String& value) {
    emlite::Val::set("requestMethod", value);
}

RequestMode RouterCondition::requestMode() const {
    return emlite::Val::get("requestMode").as<RequestMode>();
}

void RouterCondition::requestMode(const RequestMode& value) {
    emlite::Val::set("requestMode", value);
}

RequestDestination RouterCondition::requestDestination() const {
    return emlite::Val::get("requestDestination").as<RequestDestination>();
}

void RouterCondition::requestDestination(const RequestDestination& value) {
    emlite::Val::set("requestDestination", value);
}

RunningStatus RouterCondition::runningStatus() const {
    return emlite::Val::get("runningStatus").as<RunningStatus>();
}

void RouterCondition::runningStatus(const RunningStatus& value) {
    emlite::Val::set("runningStatus", value);
}

jsbind::TypedArray<RouterCondition> RouterCondition::or_() const {
    return emlite::Val::get("or").as<jsbind::TypedArray<RouterCondition>>();
}

void RouterCondition::or_(const jsbind::TypedArray<RouterCondition>& value) {
    emlite::Val::set("or", value);
}

RouterCondition RouterCondition::not_() const {
    return emlite::Val::get("not").as<RouterCondition>();
}

void RouterCondition::not_(const RouterCondition& value) {
    emlite::Val::set("not", value);
}


} // namespace webbind