#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type IdleOptions
class IdleOptions : public emlite::Val {
  explicit IdleOptions(Handle h) noexcept;
public:
    static IdleOptions take_ownership(Handle h) noexcept;
    explicit IdleOptions(const emlite::Val &val) noexcept;
    IdleOptions() noexcept;
    [[nodiscard]] IdleOptions clone() const noexcept;
    /// Getter of the `threshold` attribute.
    [[nodiscard]] long long threshold() const;
    /// Setter of the `threshold` attribute.
    void threshold(long long value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind