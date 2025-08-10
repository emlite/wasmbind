#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type NDEFMakeReadOnlyOptions
class NDEFMakeReadOnlyOptions : public emlite::Val {
  explicit NDEFMakeReadOnlyOptions(Handle h) noexcept;
public:
    static NDEFMakeReadOnlyOptions take_ownership(Handle h) noexcept;
    explicit NDEFMakeReadOnlyOptions(const emlite::Val &val) noexcept;
    NDEFMakeReadOnlyOptions() noexcept;
    [[nodiscard]] NDEFMakeReadOnlyOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind