#pragma once

#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"


class IdentityCredentialError : public DOMException {
    explicit IdentityCredentialError(Handle h) noexcept;

public:
    explicit IdentityCredentialError(const emlite::Val &val) noexcept;
    static IdentityCredentialError take_ownership(Handle h) noexcept;

    IdentityCredentialError clone() const noexcept;
    IdentityCredentialError();
    IdentityCredentialError(const jsbind::String& message);
    IdentityCredentialError(const jsbind::String& message, const jsbind::Any& options);
    jsbind::String error() const;
    jsbind::String url() const;
};

