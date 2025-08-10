#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PayerErrors
/// [`PayerErrors`](https://developer.mozilla.org/en-US/docs/Web/API/PayerErrors)
class PayerErrors : public emlite::Val {
  explicit PayerErrors(Handle h) noexcept;
public:
    static PayerErrors take_ownership(Handle h) noexcept;
    explicit PayerErrors(const emlite::Val &val) noexcept;
    PayerErrors() noexcept;
    [[nodiscard]] PayerErrors clone() const noexcept;
    [[nodiscard]] jsbind::String email() const;
    void email(const jsbind::String& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String phone() const;
    void phone(const jsbind::String& value);
};

} // namespace webbind