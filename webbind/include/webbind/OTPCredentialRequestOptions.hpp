#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OTPCredentialRequestOptions
class OTPCredentialRequestOptions : public emlite::Val {
  explicit OTPCredentialRequestOptions(Handle h) noexcept;
public:
    static OTPCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit OTPCredentialRequestOptions(const emlite::Val &val) noexcept;
    OTPCredentialRequestOptions() noexcept;
    [[nodiscard]] OTPCredentialRequestOptions clone() const noexcept;
    /// Getter of the `transport` attribute.
    [[nodiscard]] jsbind::TypedArray<OTPCredentialTransportType> transport() const;
    /// Setter of the `transport` attribute.
    void transport(const jsbind::TypedArray<OTPCredentialTransportType>& value);
};

} // namespace webbind