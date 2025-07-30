#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"

class IdentityCredentialDisconnectOptions;


class IdentityCredentialDisconnectOptions : public emlite::Val {
  explicit IdentityCredentialDisconnectOptions(Handle h) noexcept;
public:
    static IdentityCredentialDisconnectOptions take_ownership(Handle h) noexcept;
    explicit IdentityCredentialDisconnectOptions(const emlite::Val &val) noexcept;
    IdentityCredentialDisconnectOptions() noexcept;
    IdentityCredentialDisconnectOptions clone() const noexcept;
    jsbind::String accountHint() const;
    void accountHint(const jsbind::String& value);
};

class IdentityCredential : public Credential {
    explicit IdentityCredential(Handle h) noexcept;

public:
    explicit IdentityCredential(const emlite::Val &val) noexcept;
    static IdentityCredential take_ownership(Handle h) noexcept;

    IdentityCredential clone() const noexcept;
    static jsbind::Promise<jsbind::Undefined> disconnect(const IdentityCredentialDisconnectOptions& options);
    jsbind::String token() const;
    bool isAutoSelected() const;
    jsbind::String configURL() const;
};

