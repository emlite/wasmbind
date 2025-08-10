#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CredentialData.hpp"

namespace webbind {

/// Dictionary type PasswordCredentialData
class PasswordCredentialData : public CredentialData {
  explicit PasswordCredentialData(Handle h) noexcept;
public:
    static PasswordCredentialData take_ownership(Handle h) noexcept;
    explicit PasswordCredentialData(const emlite::Val &val) noexcept;
    PasswordCredentialData() noexcept;
    [[nodiscard]] PasswordCredentialData clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `iconURL` attribute.
    [[nodiscard]] jsbind::String iconURL() const;
    /// Setter of the `iconURL` attribute.
    void iconURL(const jsbind::String& value);
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::String origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::String& value);
    /// Getter of the `password` attribute.
    [[nodiscard]] jsbind::String password() const;
    /// Setter of the `password` attribute.
    void password(const jsbind::String& value);
};

} // namespace webbind