#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type NDEFWriteOptions
class NDEFWriteOptions : public emlite::Val {
  explicit NDEFWriteOptions(Handle h) noexcept;
public:
    static NDEFWriteOptions take_ownership(Handle h) noexcept;
    explicit NDEFWriteOptions(const emlite::Val &val) noexcept;
    NDEFWriteOptions() noexcept;
    [[nodiscard]] NDEFWriteOptions clone() const noexcept;
    /// Getter of the `overwrite` attribute.
    [[nodiscard]] bool overwrite() const;
    /// Setter of the `overwrite` attribute.
    void overwrite(bool value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind