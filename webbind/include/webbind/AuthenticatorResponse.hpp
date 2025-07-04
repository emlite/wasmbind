#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class AuthenticatorResponse : public emlite::Val {
    explicit AuthenticatorResponse(Handle h) noexcept;

public:
    explicit AuthenticatorResponse(const emlite::Val &val) noexcept;
    static AuthenticatorResponse take_ownership(Handle h) noexcept;

    AuthenticatorResponse clone() const noexcept;
    jsbind::ArrayBuffer clientDataJSON() const;
};

