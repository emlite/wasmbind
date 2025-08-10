#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AllAcceptedCredentialsOptions
/// [`AllAcceptedCredentialsOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AllAcceptedCredentialsOptions)
class AllAcceptedCredentialsOptions : public emlite::Val {
  explicit AllAcceptedCredentialsOptions(Handle h) noexcept;
public:
    static AllAcceptedCredentialsOptions take_ownership(Handle h) noexcept;
    explicit AllAcceptedCredentialsOptions(const emlite::Val &val) noexcept;
    AllAcceptedCredentialsOptions() noexcept;
    [[nodiscard]] AllAcceptedCredentialsOptions clone() const noexcept;
    [[nodiscard]] jsbind::String rpId() const;
    void rpId(const jsbind::String& value);
    [[nodiscard]] jsbind::Any userId() const;
    void userId(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allAcceptedCredentialIds() const;
    void allAcceptedCredentialIds(const jsbind::TypedArray<jsbind::Any>& value);
};

} // namespace webbind