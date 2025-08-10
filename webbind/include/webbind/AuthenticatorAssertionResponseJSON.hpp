#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticatorAssertionResponseJSON
/// [`AuthenticatorAssertionResponseJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAssertionResponseJSON)
class AuthenticatorAssertionResponseJSON : public emlite::Val {
  explicit AuthenticatorAssertionResponseJSON(Handle h) noexcept;
public:
    static AuthenticatorAssertionResponseJSON take_ownership(Handle h) noexcept;
    explicit AuthenticatorAssertionResponseJSON(const emlite::Val &val) noexcept;
    AuthenticatorAssertionResponseJSON() noexcept;
    [[nodiscard]] AuthenticatorAssertionResponseJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any clientDataJSON() const;
    void clientDataJSON(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any authenticatorData() const;
    void authenticatorData(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any signature() const;
    void signature(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any userHandle() const;
    void userHandle(const jsbind::Any& value);
};

} // namespace webbind