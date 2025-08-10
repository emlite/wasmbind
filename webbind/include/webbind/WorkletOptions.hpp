#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WorkletOptions
/// [`WorkletOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WorkletOptions)
class WorkletOptions : public emlite::Val {
  explicit WorkletOptions(Handle h) noexcept;
public:
    static WorkletOptions take_ownership(Handle h) noexcept;
    explicit WorkletOptions(const emlite::Val &val) noexcept;
    WorkletOptions() noexcept;
    [[nodiscard]] WorkletOptions clone() const noexcept;
    [[nodiscard]] RequestCredentials credentials() const;
    void credentials(const RequestCredentials& value);
};

} // namespace webbind