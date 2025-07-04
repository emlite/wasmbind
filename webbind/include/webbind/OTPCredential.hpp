#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


class OTPCredential : public Credential {
    explicit OTPCredential(Handle h) noexcept;

public:
    explicit OTPCredential(const emlite::Val &val) noexcept;
    static OTPCredential take_ownership(Handle h) noexcept;

    OTPCredential clone() const noexcept;
    jsbind::DOMString code() const;
};

