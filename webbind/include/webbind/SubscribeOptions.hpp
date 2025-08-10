#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SubscribeOptions
/// [`SubscribeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SubscribeOptions)
class SubscribeOptions : public emlite::Val {
  explicit SubscribeOptions(Handle h) noexcept;
public:
    static SubscribeOptions take_ownership(Handle h) noexcept;
    explicit SubscribeOptions(const emlite::Val &val) noexcept;
    SubscribeOptions() noexcept;
    [[nodiscard]] SubscribeOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind