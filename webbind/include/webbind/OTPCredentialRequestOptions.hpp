#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OTPCredentialRequestOptions
/// [`OTPCredentialRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/OTPCredentialRequestOptions)
class OTPCredentialRequestOptions : public emlite::Val {
  explicit OTPCredentialRequestOptions(Handle h) noexcept;
public:
    static OTPCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit OTPCredentialRequestOptions(const emlite::Val &val) noexcept;
    OTPCredentialRequestOptions() noexcept;
    [[nodiscard]] OTPCredentialRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<OTPCredentialTransportType> transport() const;
    void transport(const jsbind::TypedArray<OTPCredentialTransportType>& value);
};

} // namespace webbind