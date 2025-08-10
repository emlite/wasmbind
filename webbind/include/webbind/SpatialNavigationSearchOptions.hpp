#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Dictionary type SpatialNavigationSearchOptions
/// [`SpatialNavigationSearchOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SpatialNavigationSearchOptions)
class SpatialNavigationSearchOptions : public emlite::Val {
  explicit SpatialNavigationSearchOptions(Handle h) noexcept;
public:
    static SpatialNavigationSearchOptions take_ownership(Handle h) noexcept;
    explicit SpatialNavigationSearchOptions(const emlite::Val &val) noexcept;
    SpatialNavigationSearchOptions() noexcept;
    [[nodiscard]] SpatialNavigationSearchOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<Node> candidates() const;
    void candidates(const jsbind::TypedArray<Node>& value);
    [[nodiscard]] Node container() const;
    void container(const Node& value);
};

} // namespace webbind