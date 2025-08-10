#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IdentityCredentialErrorInit.hpp"

namespace webbind {

/// Dictionary type IdentityAssertionResponse
/// [`IdentityAssertionResponse`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityAssertionResponse)
class IdentityAssertionResponse : public emlite::Val {
  explicit IdentityAssertionResponse(Handle h) noexcept;
public:
    static IdentityAssertionResponse take_ownership(Handle h) noexcept;
    explicit IdentityAssertionResponse(const emlite::Val &val) noexcept;
    IdentityAssertionResponse() noexcept;
    [[nodiscard]] IdentityAssertionResponse clone() const noexcept;
    [[nodiscard]] jsbind::String token() const;
    void token(const jsbind::String& value);
    [[nodiscard]] jsbind::String continue_on() const;
    void continue_on(const jsbind::String& value);
    [[nodiscard]] IdentityCredentialErrorInit error() const;
    void error(const IdentityCredentialErrorInit& value);
};

} // namespace webbind