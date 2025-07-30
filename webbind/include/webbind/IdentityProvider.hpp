#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class IdentityResolveOptions;
class IdentityUserInfo;
class IdentityProviderConfig;


class IdentityResolveOptions : public emlite::Val {
  explicit IdentityResolveOptions(Handle h) noexcept;
public:
    static IdentityResolveOptions take_ownership(Handle h) noexcept;
    explicit IdentityResolveOptions(const emlite::Val &val) noexcept;
    IdentityResolveOptions() noexcept;
    IdentityResolveOptions clone() const noexcept;
    jsbind::String accountId() const;
    void accountId(const jsbind::String& value);
};

class IdentityUserInfo : public emlite::Val {
  explicit IdentityUserInfo(Handle h) noexcept;
public:
    static IdentityUserInfo take_ownership(Handle h) noexcept;
    explicit IdentityUserInfo(const emlite::Val &val) noexcept;
    IdentityUserInfo() noexcept;
    IdentityUserInfo clone() const noexcept;
    jsbind::String email() const;
    void email(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    jsbind::String givenName() const;
    void givenName(const jsbind::String& value);
    jsbind::String picture() const;
    void picture(const jsbind::String& value);
};

class IdentityProviderConfig : public emlite::Val {
  explicit IdentityProviderConfig(Handle h) noexcept;
public:
    static IdentityProviderConfig take_ownership(Handle h) noexcept;
    explicit IdentityProviderConfig(const emlite::Val &val) noexcept;
    IdentityProviderConfig() noexcept;
    IdentityProviderConfig clone() const noexcept;
    jsbind::String configURL() const;
    void configURL(const jsbind::String& value);
    jsbind::String clientId() const;
    void clientId(const jsbind::String& value);
};

class IdentityProvider : public emlite::Val {
    explicit IdentityProvider(Handle h) noexcept;

public:
    explicit IdentityProvider(const emlite::Val &val) noexcept;
    static IdentityProvider take_ownership(Handle h) noexcept;

    IdentityProvider clone() const noexcept;
    static jsbind::Undefined close();
    static jsbind::Promise<jsbind::Undefined> resolve(const jsbind::String& token);
    static jsbind::Promise<jsbind::Undefined> resolve(const jsbind::String& token, const IdentityResolveOptions& options);
    static jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>> getUserInfo(const IdentityProviderConfig& config);
};

