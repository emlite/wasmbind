#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AuthenticatorResponse.hpp"
#include "enums.hpp"


/// The AuthenticatorAssertionResponse class.
/// [`AuthenticatorAssertionResponse`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAssertionResponse)
class AuthenticatorAssertionResponse : public AuthenticatorResponse {
    explicit AuthenticatorAssertionResponse(Handle h) noexcept;

public:
    explicit AuthenticatorAssertionResponse(const emlite::Val &val) noexcept;
    static AuthenticatorAssertionResponse take_ownership(Handle h) noexcept;

    [[nodiscard]] AuthenticatorAssertionResponse clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `authenticatorData` attribute.
    /// [`AuthenticatorAssertionResponse.authenticatorData`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAssertionResponse/authenticatorData)
    [[nodiscard]] jsbind::ArrayBuffer authenticatorData() const;
    /// Getter of the `signature` attribute.
    /// [`AuthenticatorAssertionResponse.signature`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAssertionResponse/signature)
    [[nodiscard]] jsbind::ArrayBuffer signature() const;
    /// Getter of the `userHandle` attribute.
    /// [`AuthenticatorAssertionResponse.userHandle`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAssertionResponse/userHandle)
    [[nodiscard]] jsbind::ArrayBuffer userHandle() const;
};

