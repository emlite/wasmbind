#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AssignedNodesOptions
class AssignedNodesOptions : public emlite::Val {
  explicit AssignedNodesOptions(Handle h) noexcept;
public:
    static AssignedNodesOptions take_ownership(Handle h) noexcept;
    explicit AssignedNodesOptions(const emlite::Val &val) noexcept;
    AssignedNodesOptions() noexcept;
    [[nodiscard]] AssignedNodesOptions clone() const noexcept;
    /// Getter of the `flatten` attribute.
    [[nodiscard]] bool flatten() const;
    /// Setter of the `flatten` attribute.
    void flatten(bool value);
};

} // namespace webbind