#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SubscribeOptions
class SubscribeOptions : public emlite::Val {
  explicit SubscribeOptions(Handle h) noexcept;
public:
    static SubscribeOptions take_ownership(Handle h) noexcept;
    explicit SubscribeOptions(const emlite::Val &val) noexcept;
    SubscribeOptions() noexcept;
    [[nodiscard]] SubscribeOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind