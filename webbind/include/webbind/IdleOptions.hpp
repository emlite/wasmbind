#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type IdleOptions
/// [`IdleOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IdleOptions)
class IdleOptions : public emlite::Val {
  explicit IdleOptions(Handle h) noexcept;
public:
    static IdleOptions take_ownership(Handle h) noexcept;
    explicit IdleOptions(const emlite::Val &val) noexcept;
    IdleOptions() noexcept;
    [[nodiscard]] IdleOptions clone() const noexcept;
    [[nodiscard]] long long threshold() const;
    void threshold(long long value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

} // namespace webbind