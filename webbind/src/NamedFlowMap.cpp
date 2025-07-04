#include <webbind/NamedFlowMap.hpp>


NamedFlowMap NamedFlowMap::take_ownership(Handle h) noexcept {
        return NamedFlowMap(h);
    }
NamedFlowMap NamedFlowMap::clone() const noexcept { return *this; }
NamedFlowMap::NamedFlowMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NamedFlowMap::NamedFlowMap(const emlite::Val &val) noexcept: emlite::Val(val) {}


