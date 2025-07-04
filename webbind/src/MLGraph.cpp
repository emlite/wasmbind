#include <webbind/MLGraph.hpp>


MLGraph MLGraph::take_ownership(Handle h) noexcept {
        return MLGraph(h);
    }
MLGraph MLGraph::clone() const noexcept { return *this; }
MLGraph::MLGraph(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MLGraph::MLGraph(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined MLGraph::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

