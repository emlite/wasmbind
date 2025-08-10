#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type NDEFMakeReadOnlyOptions
/// [`NDEFMakeReadOnlyOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFMakeReadOnlyOptions)
class NDEFMakeReadOnlyOptions : public emlite::Val {
  explicit NDEFMakeReadOnlyOptions(Handle h) noexcept;
public:
    static NDEFMakeReadOnlyOptions take_ownership(Handle h) noexcept;
    explicit NDEFMakeReadOnlyOptions(const emlite::Val &val) noexcept;
    NDEFMakeReadOnlyOptions() noexcept;
    [[nodiscard]] NDEFMakeReadOnlyOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind