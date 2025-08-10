#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityValidationResult
/// [`RTCIdentityValidationResult`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIdentityValidationResult)
class RTCIdentityValidationResult : public emlite::Val {
  explicit RTCIdentityValidationResult(Handle h) noexcept;
public:
    static RTCIdentityValidationResult take_ownership(Handle h) noexcept;
    explicit RTCIdentityValidationResult(const emlite::Val &val) noexcept;
    RTCIdentityValidationResult() noexcept;
    [[nodiscard]] RTCIdentityValidationResult clone() const noexcept;
    [[nodiscard]] jsbind::String identity() const;
    void identity(const jsbind::String& value);
    [[nodiscard]] jsbind::String contents() const;
    void contents(const jsbind::String& value);
};

} // namespace webbind