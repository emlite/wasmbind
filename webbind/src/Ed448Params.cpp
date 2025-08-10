#include "webbind/Ed448Params.hpp"

using emlite::Val;
namespace webbind {

Ed448Params::Ed448Params(Handle h) noexcept : Algorithm(emlite::Val::take_ownership(h)) {}
Ed448Params Ed448Params::take_ownership(Handle h) noexcept {
        return Ed448Params(h);
    }
Ed448Params::Ed448Params(const emlite::Val &val) noexcept: Algorithm(val) {}
Ed448Params::Ed448Params() noexcept: Algorithm(emlite::Val::object()) {}
Ed448Params Ed448Params::clone() const noexcept { return *this; }

jsbind::Any Ed448Params::context() const {
    return emlite::Val::get("context").as<jsbind::Any>();
}

void Ed448Params::context(const jsbind::Any& value) {
    emlite::Val::set("context", value);
}


} // namespace webbind