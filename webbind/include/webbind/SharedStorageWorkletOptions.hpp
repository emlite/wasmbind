#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletOptions.hpp"

namespace webbind {

/// Dictionary type SharedStorageWorkletOptions
class SharedStorageWorkletOptions : public WorkletOptions {
  explicit SharedStorageWorkletOptions(Handle h) noexcept;
public:
    static SharedStorageWorkletOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageWorkletOptions(const emlite::Val &val) noexcept;
    SharedStorageWorkletOptions() noexcept;
    [[nodiscard]] SharedStorageWorkletOptions clone() const noexcept;
    /// Getter of the `dataOrigin` attribute.
    [[nodiscard]] jsbind::String dataOrigin() const;
    /// Setter of the `dataOrigin` attribute.
    void dataOrigin(const jsbind::String& value);
};

} // namespace webbind