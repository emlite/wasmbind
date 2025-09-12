#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class IdentityCredentialErrorInit;

/// Dictionary type IdentityAssertionResponse
class IdentityAssertionResponse : public emlite::Val {
  explicit IdentityAssertionResponse(Handle h) noexcept;
public:
    static IdentityAssertionResponse take_ownership(Handle h) noexcept;
    explicit IdentityAssertionResponse(const emlite::Val &val) noexcept;
    IdentityAssertionResponse() noexcept;
    [[nodiscard]] IdentityAssertionResponse clone() const noexcept;
    /// Getter of the `token` attribute.
    [[nodiscard]] jsbind::Any token() const;
    /// Setter of the `token` attribute.
    void token(const jsbind::Any& value);
    /// Getter of the `continue_on` attribute.
    [[nodiscard]] jsbind::String continue_on() const;
    /// Setter of the `continue_on` attribute.
    void continue_on(const jsbind::String& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] IdentityCredentialErrorInit error() const;
    /// Setter of the `error` attribute.
    void error(const IdentityCredentialErrorInit& value);
};

} // namespace webbind