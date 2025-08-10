#include <webbind/SpatialNavigationSearchOptions.hpp>
#include <webbind/Node.hpp>

namespace webbind {

SpatialNavigationSearchOptions::SpatialNavigationSearchOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SpatialNavigationSearchOptions SpatialNavigationSearchOptions::take_ownership(Handle h) noexcept {
    return SpatialNavigationSearchOptions(h);
}

SpatialNavigationSearchOptions::SpatialNavigationSearchOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

SpatialNavigationSearchOptions::SpatialNavigationSearchOptions() noexcept: emlite::Val(emlite::Val::object()) {}

SpatialNavigationSearchOptions SpatialNavigationSearchOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<Node> SpatialNavigationSearchOptions::candidates() const {
    return emlite::Val::get("candidates").as<jsbind::TypedArray<Node>>();
}

void SpatialNavigationSearchOptions::candidates(const jsbind::TypedArray<Node>& value) {
    emlite::Val::set("candidates", value);
}

Node SpatialNavigationSearchOptions::container() const {
    return emlite::Val::get("container").as<Node>();
}

void SpatialNavigationSearchOptions::container(const Node& value) {
    emlite::Val::set("container", value);
}


} // namespace webbind