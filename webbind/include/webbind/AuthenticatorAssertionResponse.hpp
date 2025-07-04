#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AuthenticatorResponse.hpp"
#include "enums.hpp"


class AuthenticatorAssertionResponse : public AuthenticatorResponse {
    explicit AuthenticatorAssertionResponse(Handle h) noexcept;

public:
    explicit AuthenticatorAssertionResponse(const emlite::Val &val) noexcept;
    static AuthenticatorAssertionResponse take_ownership(Handle h) noexcept;

    AuthenticatorAssertionResponse clone() const noexcept;
    jsbind::ArrayBuffer authenticatorData() const;
    jsbind::ArrayBuffer signature() const;
    jsbind::ArrayBuffer userHandle() const;
};

