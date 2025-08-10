#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PrivateToken
class PrivateToken : public emlite::Val {
  explicit PrivateToken(Handle h) noexcept;
public:
    static PrivateToken take_ownership(Handle h) noexcept;
    explicit PrivateToken(const emlite::Val &val) noexcept;
    PrivateToken() noexcept;
    [[nodiscard]] PrivateToken clone() const noexcept;
    /// Getter of the `version` attribute.
    [[nodiscard]] TokenVersion version() const;
    /// Setter of the `version` attribute.
    void version(const TokenVersion& value);
    /// Getter of the `operation` attribute.
    [[nodiscard]] OperationType operation() const;
    /// Setter of the `operation` attribute.
    void operation(const OperationType& value);
    /// Getter of the `refreshPolicy` attribute.
    [[nodiscard]] RefreshPolicy refreshPolicy() const;
    /// Setter of the `refreshPolicy` attribute.
    void refreshPolicy(const RefreshPolicy& value);
    /// Getter of the `issuers` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> issuers() const;
    /// Setter of the `issuers` attribute.
    void issuers(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind