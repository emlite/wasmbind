#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCIdentityValidationResult
class RTCIdentityValidationResult : public emlite::Val {
  explicit RTCIdentityValidationResult(Handle h) noexcept;
public:
    static RTCIdentityValidationResult take_ownership(Handle h) noexcept;
    explicit RTCIdentityValidationResult(const emlite::Val &val) noexcept;
    RTCIdentityValidationResult() noexcept;
    [[nodiscard]] RTCIdentityValidationResult clone() const noexcept;
    /// Getter of the `identity` attribute.
    [[nodiscard]] jsbind::String identity() const;
    /// Setter of the `identity` attribute.
    void identity(const jsbind::String& value);
    /// Getter of the `contents` attribute.
    [[nodiscard]] jsbind::String contents() const;
    /// Setter of the `contents` attribute.
    void contents(const jsbind::String& value);
};

} // namespace webbind