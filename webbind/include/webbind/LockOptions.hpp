#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type LockOptions
class LockOptions : public emlite::Val {
  explicit LockOptions(Handle h) noexcept;
public:
    static LockOptions take_ownership(Handle h) noexcept;
    explicit LockOptions(const emlite::Val &val) noexcept;
    LockOptions() noexcept;
    [[nodiscard]] LockOptions clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] LockMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const LockMode& value);
    /// Getter of the `ifAvailable` attribute.
    [[nodiscard]] bool ifAvailable() const;
    /// Setter of the `ifAvailable` attribute.
    void ifAvailable(bool value);
    /// Getter of the `steal` attribute.
    [[nodiscard]] bool steal() const;
    /// Setter of the `steal` attribute.
    void steal(bool value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind