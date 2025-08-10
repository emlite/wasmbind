#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdleRequestOptions
/// [`IdleRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IdleRequestOptions)
class IdleRequestOptions : public emlite::Val {
  explicit IdleRequestOptions(Handle h) noexcept;
public:
    static IdleRequestOptions take_ownership(Handle h) noexcept;
    explicit IdleRequestOptions(const emlite::Val &val) noexcept;
    IdleRequestOptions() noexcept;
    [[nodiscard]] IdleRequestOptions clone() const noexcept;
    [[nodiscard]] unsigned long timeout() const;
    void timeout(unsigned long value);
};

} // namespace webbind