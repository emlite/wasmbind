#include <webbind/NamedFlowMap.hpp>

namespace webbind {

NamedFlowMap NamedFlowMap::take_ownership(Handle h) noexcept {
        return NamedFlowMap(h);
    }
NamedFlowMap NamedFlowMap::clone() const noexcept { return *this; }
emlite::Val NamedFlowMap::instance() noexcept { return emlite::Val::global("NamedFlowMap"); }
NamedFlowMap::NamedFlowMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NamedFlowMap::NamedFlowMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind