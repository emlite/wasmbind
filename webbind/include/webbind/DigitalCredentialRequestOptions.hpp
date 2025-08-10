#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DigitalCredentialGetRequest.hpp"

namespace webbind {

/// Dictionary type DigitalCredentialRequestOptions
class DigitalCredentialRequestOptions : public emlite::Val {
  explicit DigitalCredentialRequestOptions(Handle h) noexcept;
public:
    static DigitalCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit DigitalCredentialRequestOptions(const emlite::Val &val) noexcept;
    DigitalCredentialRequestOptions() noexcept;
    [[nodiscard]] DigitalCredentialRequestOptions clone() const noexcept;
    /// Getter of the `requests` attribute.
    [[nodiscard]] jsbind::TypedArray<DigitalCredentialGetRequest> requests() const;
    /// Setter of the `requests` attribute.
    void requests(const jsbind::TypedArray<DigitalCredentialGetRequest>& value);
};

} // namespace webbind