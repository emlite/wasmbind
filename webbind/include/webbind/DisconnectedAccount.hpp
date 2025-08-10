#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DisconnectedAccount
class DisconnectedAccount : public emlite::Val {
  explicit DisconnectedAccount(Handle h) noexcept;
public:
    static DisconnectedAccount take_ownership(Handle h) noexcept;
    explicit DisconnectedAccount(const emlite::Val &val) noexcept;
    DisconnectedAccount() noexcept;
    [[nodiscard]] DisconnectedAccount clone() const noexcept;
    /// Getter of the `account_id` attribute.
    [[nodiscard]] jsbind::String account_id() const;
    /// Setter of the `account_id` attribute.
    void account_id(const jsbind::String& value);
};

} // namespace webbind