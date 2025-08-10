#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FederatedCredentialRequestOptions
/// [`FederatedCredentialRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FederatedCredentialRequestOptions)
class FederatedCredentialRequestOptions : public emlite::Val {
  explicit FederatedCredentialRequestOptions(Handle h) noexcept;
public:
    static FederatedCredentialRequestOptions take_ownership(Handle h) noexcept;
    explicit FederatedCredentialRequestOptions(const emlite::Val &val) noexcept;
    FederatedCredentialRequestOptions() noexcept;
    [[nodiscard]] FederatedCredentialRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> providers() const;
    void providers(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> protocols() const;
    void protocols(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind