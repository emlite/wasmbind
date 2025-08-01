#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Credential.hpp"
#include "enums.hpp"


/// The PasswordCredential class.
/// [`PasswordCredential`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential)
class PasswordCredential : public Credential {
    explicit PasswordCredential(Handle h) noexcept;

public:
    explicit PasswordCredential(const emlite::Val &val) noexcept;
    static PasswordCredential take_ownership(Handle h) noexcept;

    [[nodiscard]] PasswordCredential clone() const noexcept;
    /// The `new PasswordCredential(..)` constructor, creating a new PasswordCredential instance
    PasswordCredential(const jsbind::Any& data);
    /// Getter of the `password` attribute.
    /// [`PasswordCredential.password`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/password)
    [[nodiscard]] jsbind::String password() const;
    /// Getter of the `name` attribute.
    /// [`PasswordCredential.name`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `iconURL` attribute.
    /// [`PasswordCredential.iconURL`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/iconURL)
    [[nodiscard]] jsbind::String iconURL() const;
};

