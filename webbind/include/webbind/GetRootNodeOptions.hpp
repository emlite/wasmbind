#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GetRootNodeOptions
class GetRootNodeOptions : public emlite::Val {
  explicit GetRootNodeOptions(Handle h) noexcept;
public:
    static GetRootNodeOptions take_ownership(Handle h) noexcept;
    explicit GetRootNodeOptions(const emlite::Val &val) noexcept;
    GetRootNodeOptions() noexcept;
    [[nodiscard]] GetRootNodeOptions clone() const noexcept;
    /// Getter of the `composed` attribute.
    [[nodiscard]] bool composed() const;
    /// Setter of the `composed` attribute.
    void composed(bool value);
};

} // namespace webbind