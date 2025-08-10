#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DigitalCredentialCreateRequest.hpp"

namespace webbind {

/// Dictionary type DigitalCredentialCreationOptions
class DigitalCredentialCreationOptions : public emlite::Val {
  explicit DigitalCredentialCreationOptions(Handle h) noexcept;
public:
    static DigitalCredentialCreationOptions take_ownership(Handle h) noexcept;
    explicit DigitalCredentialCreationOptions(const emlite::Val &val) noexcept;
    DigitalCredentialCreationOptions() noexcept;
    [[nodiscard]] DigitalCredentialCreationOptions clone() const noexcept;
    /// Getter of the `requests` attribute.
    [[nodiscard]] jsbind::TypedArray<DigitalCredentialCreateRequest> requests() const;
    /// Setter of the `requests` attribute.
    void requests(const jsbind::TypedArray<DigitalCredentialCreateRequest>& value);
};

} // namespace webbind