#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type NDEFScanOptions
class NDEFScanOptions : public emlite::Val {
  explicit NDEFScanOptions(Handle h) noexcept;
public:
    static NDEFScanOptions take_ownership(Handle h) noexcept;
    explicit NDEFScanOptions(const emlite::Val &val) noexcept;
    NDEFScanOptions() noexcept;
    [[nodiscard]] NDEFScanOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind