#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CredentialData.hpp"

namespace webbind {

/// Dictionary type PasswordCredentialData
/// [`PasswordCredentialData`](https://developer.mozilla.org/en-US/docs/Web/API/PasswordCredentialData)
class PasswordCredentialData : public CredentialData {
  explicit PasswordCredentialData(Handle h) noexcept;
public:
    static PasswordCredentialData take_ownership(Handle h) noexcept;
    explicit PasswordCredentialData(const emlite::Val &val) noexcept;
    PasswordCredentialData() noexcept;
    [[nodiscard]] PasswordCredentialData clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String iconURL() const;
    void iconURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String origin() const;
    void origin(const jsbind::String& value);
    [[nodiscard]] jsbind::String password() const;
    void password(const jsbind::String& value);
};

} // namespace webbind