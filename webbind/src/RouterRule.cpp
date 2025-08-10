#include <webbind/RouterRule.hpp>
#include <webbind/RouterCondition.hpp>

namespace webbind {

RouterRule::RouterRule(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RouterRule RouterRule::take_ownership(Handle h) noexcept {
    return RouterRule(h);
}

RouterRule::RouterRule(const emlite::Val &val) noexcept: emlite::Val(val) {}

RouterRule::RouterRule() noexcept: emlite::Val(emlite::Val::object()) {}

RouterRule RouterRule::clone() const noexcept { return *this; }

RouterCondition RouterRule::condition() const {
    return emlite::Val::get("condition").as<RouterCondition>();
}

void RouterRule::condition(const RouterCondition& value) {
    emlite::Val::set("condition", value);
}

jsbind::Any RouterRule::source() const {
    return emlite::Val::get("source").as<jsbind::Any>();
}

void RouterRule::source(const jsbind::Any& value) {
    emlite::Val::set("source", value);
}


} // namespace webbind