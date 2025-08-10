#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PADebugModeOptions
class PADebugModeOptions : public emlite::Val {
  explicit PADebugModeOptions(Handle h) noexcept;
public:
    static PADebugModeOptions take_ownership(Handle h) noexcept;
    explicit PADebugModeOptions(const emlite::Val &val) noexcept;
    PADebugModeOptions() noexcept;
    [[nodiscard]] PADebugModeOptions clone() const noexcept;
    /// Getter of the `debugKey` attribute.
    [[nodiscard]] long long debugKey() const;
    /// Setter of the `debugKey` attribute.
    void debugKey(long long value);
};

} // namespace webbind