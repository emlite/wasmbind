#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AuthenticationExtensionsPRFValuesJSON
/// [`AuthenticationExtensionsPRFValuesJSON`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticationExtensionsPRFValuesJSON)
class AuthenticationExtensionsPRFValuesJSON : public emlite::Val {
  explicit AuthenticationExtensionsPRFValuesJSON(Handle h) noexcept;
public:
    static AuthenticationExtensionsPRFValuesJSON take_ownership(Handle h) noexcept;
    explicit AuthenticationExtensionsPRFValuesJSON(const emlite::Val &val) noexcept;
    AuthenticationExtensionsPRFValuesJSON() noexcept;
    [[nodiscard]] AuthenticationExtensionsPRFValuesJSON clone() const noexcept;
    [[nodiscard]] jsbind::Any first() const;
    void first(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any second() const;
    void second(const jsbind::Any& value);
};

} // namespace webbind