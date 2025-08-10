#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdleRequestOptions
class IdleRequestOptions : public emlite::Val {
  explicit IdleRequestOptions(Handle h) noexcept;
public:
    static IdleRequestOptions take_ownership(Handle h) noexcept;
    explicit IdleRequestOptions(const emlite::Val &val) noexcept;
    IdleRequestOptions() noexcept;
    [[nodiscard]] IdleRequestOptions clone() const noexcept;
    /// Getter of the `timeout` attribute.
    [[nodiscard]] unsigned long timeout() const;
    /// Setter of the `timeout` attribute.
    void timeout(unsigned long value);
};

} // namespace webbind