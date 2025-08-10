#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AssignedNodesOptions
/// [`AssignedNodesOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AssignedNodesOptions)
class AssignedNodesOptions : public emlite::Val {
  explicit AssignedNodesOptions(Handle h) noexcept;
public:
    static AssignedNodesOptions take_ownership(Handle h) noexcept;
    explicit AssignedNodesOptions(const emlite::Val &val) noexcept;
    AssignedNodesOptions() noexcept;
    [[nodiscard]] AssignedNodesOptions clone() const noexcept;
    [[nodiscard]] bool flatten() const;
    void flatten(bool value);
};

} // namespace webbind