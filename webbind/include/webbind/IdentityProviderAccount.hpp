#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderAccount
/// [`IdentityProviderAccount`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityProviderAccount)
class IdentityProviderAccount : public emlite::Val {
  explicit IdentityProviderAccount(Handle h) noexcept;
public:
    static IdentityProviderAccount take_ownership(Handle h) noexcept;
    explicit IdentityProviderAccount(const emlite::Val &val) noexcept;
    IdentityProviderAccount() noexcept;
    [[nodiscard]] IdentityProviderAccount clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String email() const;
    void email(const jsbind::String& value);
    [[nodiscard]] jsbind::String tel() const;
    void tel(const jsbind::String& value);
    [[nodiscard]] jsbind::String username() const;
    void username(const jsbind::String& value);
    [[nodiscard]] jsbind::String given_name() const;
    void given_name(const jsbind::String& value);
    [[nodiscard]] jsbind::String picture() const;
    void picture(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> approved_clients() const;
    void approved_clients(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> login_hints() const;
    void login_hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> domain_hints() const;
    void domain_hints(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> label_hints() const;
    void label_hints(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind