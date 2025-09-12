#include <webbind/ContextParams.hpp>

namespace webbind {

ContextParams::ContextParams(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
ContextParams ContextParams::take_ownership(Handle h) noexcept {
    return ContextParams(h);
}

ContextParams::ContextParams(const emlite::Val &val) noexcept: Algorithm(val) {}

ContextParams::ContextParams() noexcept: Algorithm(emlite::Val::object()) {}

ContextParams ContextParams::clone() const noexcept { return *this; }

jsbind::Any ContextParams::context() const {
    return emlite::Val::get("context").as<jsbind::Any>();
}

void ContextParams::context(const jsbind::Any& value) {
    emlite::Val::set("context", value);
}


} // namespace webbind