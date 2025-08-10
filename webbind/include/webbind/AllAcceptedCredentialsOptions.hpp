#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AllAcceptedCredentialsOptions
class AllAcceptedCredentialsOptions : public emlite::Val {
  explicit AllAcceptedCredentialsOptions(Handle h) noexcept;
public:
    static AllAcceptedCredentialsOptions take_ownership(Handle h) noexcept;
    explicit AllAcceptedCredentialsOptions(const emlite::Val &val) noexcept;
    AllAcceptedCredentialsOptions() noexcept;
    [[nodiscard]] AllAcceptedCredentialsOptions clone() const noexcept;
    /// Getter of the `rpId` attribute.
    [[nodiscard]] jsbind::String rpId() const;
    /// Setter of the `rpId` attribute.
    void rpId(const jsbind::String& value);
    /// Getter of the `userId` attribute.
    [[nodiscard]] jsbind::Any userId() const;
    /// Setter of the `userId` attribute.
    void userId(const jsbind::Any& value);
    /// Getter of the `allAcceptedCredentialIds` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allAcceptedCredentialIds() const;
    /// Setter of the `allAcceptedCredentialIds` attribute.
    void allAcceptedCredentialIds(const jsbind::TypedArray<jsbind::Any>& value);
};

} // namespace webbind