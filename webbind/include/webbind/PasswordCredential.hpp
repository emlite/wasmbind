#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Credential.hpp"
#include "PasswordCredentialData.hpp"

namespace webbind {

/// Interface PasswordCredential
/// [`PasswordCredential`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential)
class PasswordCredential : public Credential {
    explicit PasswordCredential(Handle h) noexcept;
public:
    explicit PasswordCredential(const emlite::Val &val) noexcept;
    static PasswordCredential take_ownership(Handle h) noexcept;
    [[nodiscard]] PasswordCredential clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PasswordCredential(..)` constructor, creating a new PasswordCredential instance
    PasswordCredential(const PasswordCredentialData& data);
    /// [`PasswordCredential.password`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/password)
    /// [`PasswordCredential.password`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/password)
    [[nodiscard]] jsbind::String password() const;
    /// [`PasswordCredential.name`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/name)
    /// [`PasswordCredential.name`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`PasswordCredential.iconURL`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/iconURL)
    /// [`PasswordCredential.iconURL`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredential/iconURL)
    [[nodiscard]] jsbind::String iconURL() const;
};

} // namespace webbind