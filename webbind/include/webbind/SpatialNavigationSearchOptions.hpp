#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Dictionary type SpatialNavigationSearchOptions
class SpatialNavigationSearchOptions : public emlite::Val {
  explicit SpatialNavigationSearchOptions(Handle h) noexcept;
public:
    static SpatialNavigationSearchOptions take_ownership(Handle h) noexcept;
    explicit SpatialNavigationSearchOptions(const emlite::Val &val) noexcept;
    SpatialNavigationSearchOptions() noexcept;
    [[nodiscard]] SpatialNavigationSearchOptions clone() const noexcept;
    /// Getter of the `candidates` attribute.
    [[nodiscard]] jsbind::TypedArray<Node> candidates() const;
    /// Setter of the `candidates` attribute.
    void candidates(const jsbind::TypedArray<Node>& value);
    /// Getter of the `container` attribute.
    [[nodiscard]] Node container() const;
    /// Setter of the `container` attribute.
    void container(const Node& value);
};

} // namespace webbind