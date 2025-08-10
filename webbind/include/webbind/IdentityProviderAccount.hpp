#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IdentityProviderAccount
class IdentityProviderAccount : public emlite::Val {
  explicit IdentityProviderAccount(Handle h) noexcept;
public:
    static IdentityProviderAccount take_ownership(Handle h) noexcept;
    explicit IdentityProviderAccount(const emlite::Val &val) noexcept;
    IdentityProviderAccount() noexcept;
    [[nodiscard]] IdentityProviderAccount clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `email` attribute.
    [[nodiscard]] jsbind::String email() const;
    /// Setter of the `email` attribute.
    void email(const jsbind::String& value);
    /// Getter of the `tel` attribute.
    [[nodiscard]] jsbind::String tel() const;
    /// Setter of the `tel` attribute.
    void tel(const jsbind::String& value);
    /// Getter of the `username` attribute.
    [[nodiscard]] jsbind::String username() const;
    /// Setter of the `username` attribute.
    void username(const jsbind::String& value);
    /// Getter of the `given_name` attribute.
    [[nodiscard]] jsbind::String given_name() const;
    /// Setter of the `given_name` attribute.
    void given_name(const jsbind::String& value);
    /// Getter of the `picture` attribute.
    [[nodiscard]] jsbind::String picture() const;
    /// Setter of the `picture` attribute.
    void picture(const jsbind::String& value);
    /// Getter of the `approved_clients` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> approved_clients() const;
    /// Setter of the `approved_clients` attribute.
    void approved_clients(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `login_hints` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> login_hints() const;
    /// Setter of the `login_hints` attribute.
    void login_hints(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `domain_hints` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> domain_hints() const;
    /// Setter of the `domain_hints` attribute.
    void domain_hints(const jsbind::TypedArray<jsbind::String>& value);
    /// Getter of the `label_hints` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> label_hints() const;
    /// Setter of the `label_hints` attribute.
    void label_hints(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind