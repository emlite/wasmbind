#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FederatedCredentialRequestOptions
class FederatedCredentialRequestOptions : public emlite::Val {
  explicit FederatedCredentialRequestOptions(Handle h) noexcept;
public:
    static FederatedCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit FederatedCredentialRequestOptions(const emlite::Val &val) noexcept;
    FederatedCredentialRequestOptions() noexcept;
    [[nodiscard]] FederatedCredentialRequestOptions clone() const noexcept;
    /// Getter of the `providers` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> providers() const;
    /// Setter of the `providers` attribute.
    void providers(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `protocols` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> protocols() const;
    /// Setter of the `protocols` attribute.
    void protocols(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind