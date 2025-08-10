#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type LockOptions
/// [`LockOptions`](https://developer.mozilla.org/en-US/docs/Web/API/LockOptions)
class LockOptions : public emlite::Val {
  explicit LockOptions(Handle h) noexcept;
public:
    static LockOptions take_ownership(Handle h) noexcept;
    explicit LockOptions(const emlite::Val &val) noexcept;
    LockOptions() noexcept;
    [[nodiscard]] LockOptions clone() const noexcept;
    [[nodiscard]] LockMode mode() const;
    void mode(const LockMode& value);
    [[nodiscard]] bool ifAvailable() const;
    void ifAvailable(bool value);
    [[nodiscard]] bool steal() const;
    void steal(bool value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind