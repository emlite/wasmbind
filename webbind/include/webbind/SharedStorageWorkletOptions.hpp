#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletOptions.hpp"

namespace webbind {

/// Dictionary type SharedStorageWorkletOptions
/// [`SharedStorageWorkletOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletOptions)
class SharedStorageWorkletOptions : public WorkletOptions {
  explicit SharedStorageWorkletOptions(Handle h) noexcept;
public:
    static SharedStorageWorkletOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageWorkletOptions(const emlite::Val &val) noexcept;
    SharedStorageWorkletOptions() noexcept;
    [[nodiscard]] SharedStorageWorkletOptions clone() const noexcept;
    [[nodiscard]] jsbind::String dataOrigin() const;
    void dataOrigin(const jsbind::String& value);
};

} // namespace webbind