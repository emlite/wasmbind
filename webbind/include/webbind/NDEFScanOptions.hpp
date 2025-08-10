#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type NDEFScanOptions
/// [`NDEFScanOptions`](https://developer.mozilla.org/en-US/docs/Web/API/NDEFScanOptions)
class NDEFScanOptions : public emlite::Val {
  explicit NDEFScanOptions(Handle h) noexcept;
public:
    static NDEFScanOptions take_ownership(Handle h) noexcept;
    explicit NDEFScanOptions(const emlite::Val &val) noexcept;
    NDEFScanOptions() noexcept;
    [[nodiscard]] NDEFScanOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind