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
    [[nodiscard]] IdentityResolveOptions clone() const noexcept;
    [[nodiscard]] jsbind::String accountId() const;
    void accountId(const jsbind::String& value);
};

class IdentityUserInfo : public emlite::Val {
  explicit IdentityUserInfo(Handle h) noexcept;
public:
    static IdentityUserInfo take_ownership(Handle h) noexcept;
    explicit IdentityUserInfo(const emlite::Val &val) noexcept;
    IdentityUserInfo() noexcept;
    [[nodiscard]] IdentityUserInfo clone() const noexcept;
    [[nodiscard]] jsbind::String email() const;
    void email(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String givenName() const;
    void givenName(const jsbind::String& value);
    [[nodiscard]] jsbind::String picture() const;
    void picture(const jsbind::String& value);
};

class IdentityProviderConfig : public emlite::Val {
  explicit IdentityProviderConfig(Handle h) noexcept;
public:
    static IdentityProviderConfig take_ownership(Handle h) noexcept;
    explicit IdentityProviderConfig(const emlite::Val &val) noexcept;
    IdentityProviderConfig() noexcept;
    [[nodiscard]] IdentityProviderConfig clone() const noexcept;
    [[nodiscard]] jsbind::String configURL() const;
    void configURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String clientId() const;
    void clientId(const jsbind::String& value);
};

/// The IdentityProvider class.
/// [`IdentityProvider`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider)
class IdentityProvider : public emlite::Val {
    explicit IdentityProvider(Handle h) noexcept;

public:
    explicit IdentityProvider(const emlite::Val &val) noexcept;
    static IdentityProvider take_ownership(Handle h) noexcept;

    [[nodiscard]] IdentityProvider clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The close method.
    /// [`IdentityProvider.close`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/close)
    static jsbind::Undefined close();
    /// The resolve method.
    /// [`IdentityProvider.resolve`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/resolve)
    static jsbind::Promise<jsbind::Undefined> resolve(const jsbind::String& token);
    /// The resolve method.
    /// [`IdentityProvider.resolve`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/resolve)
    static jsbind::Promise<jsbind::Undefined> resolve(const jsbind::String& token, const IdentityResolveOptions& options);
    /// The getUserInfo method.
    /// [`IdentityProvider.getUserInfo`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProvider/getUserInfo)
    static jsbind::Promise<jsbind::TypedArray<IdentityUserInfo>> getUserInfo(const IdentityProviderConfig& config);
};

