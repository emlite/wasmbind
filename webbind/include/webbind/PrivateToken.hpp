#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PrivateToken
/// [`PrivateToken`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateToken)
class PrivateToken : public emlite::Val {
  explicit PrivateToken(Handle h) noexcept;
public:
    static PrivateToken take_ownership(Handle h) noexcept;
    explicit PrivateToken(const emlite::Val &val) noexcept;
    PrivateToken() noexcept;
    [[nodiscard]] PrivateToken clone() const noexcept;
    [[nodiscard]] TokenVersion version() const;
    void version(const TokenVersion& value);
    [[nodiscard]] OperationType operation() const;
    void operation(const OperationType& value);
    [[nodiscard]] RefreshPolicy refreshPolicy() const;
    void refreshPolicy(const RefreshPolicy& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> issuers() const;
    void issuers(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind