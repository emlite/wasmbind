#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The AuthenticatorResponse class.
/// [`AuthenticatorResponse`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorResponse)
class AuthenticatorResponse : public emlite::Val {
    explicit AuthenticatorResponse(Handle h) noexcept;

public:
    explicit AuthenticatorResponse(const emlite::Val &val) noexcept;
    static AuthenticatorResponse take_ownership(Handle h) noexcept;

    [[nodiscard]] AuthenticatorResponse clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `clientDataJSON` attribute.
    /// [`AuthenticatorResponse.clientDataJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorResponse/clientDataJSON)
    [[nodiscard]] jsbind::ArrayBuffer clientDataJSON() const;
};

