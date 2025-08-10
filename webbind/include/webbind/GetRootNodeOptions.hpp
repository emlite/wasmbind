#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GetRootNodeOptions
/// [`GetRootNodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/GetRootNodeOptions)
class GetRootNodeOptions : public emlite::Val {
  explicit GetRootNodeOptions(Handle h) noexcept;
public:
    static GetRootNodeOptions take_ownership(Handle h) noexcept;
    explicit GetRootNodeOptions(const emlite::Val &val) noexcept;
    GetRootNodeOptions() noexcept;
    [[nodiscard]] GetRootNodeOptions clone() const noexcept;
    [[nodiscard]] bool composed() const;
    void composed(bool value);
};

} // namespace webbind