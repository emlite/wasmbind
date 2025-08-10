#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialParameters
/// [`PublicKeyCredentialParameters`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialParameters)
class PublicKeyCredentialParameters : public emlite::Val {
  explicit PublicKeyCredentialParameters(Handle h) noexcept;
public:
    static PublicKeyCredentialParameters take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialParameters(const emlite::Val &val) noexcept;
    PublicKeyCredentialParameters() noexcept;
    [[nodiscard]] PublicKeyCredentialParameters clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::Any alg() const;
    void alg(const jsbind::Any& value);
};

} // namespace webbind