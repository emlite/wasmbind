#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DisconnectedAccount
/// [`DisconnectedAccount`](https://developer.mozilla.org/en-US/docs/Web/API/DisconnectedAccount)
class DisconnectedAccount : public emlite::Val {
  explicit DisconnectedAccount(Handle h) noexcept;
public:
    static DisconnectedAccount take_ownership(Handle h) noexcept;
    explicit DisconnectedAccount(const emlite::Val &val) noexcept;
    DisconnectedAccount() noexcept;
    [[nodiscard]] DisconnectedAccount clone() const noexcept;
    [[nodiscard]] jsbind::String account_id() const;
    void account_id(const jsbind::String& value);
};

} // namespace webbind