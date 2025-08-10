#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentEntityLogo
/// [`PaymentEntityLogo`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentEntityLogo)
class PaymentEntityLogo : public emlite::Val {
  explicit PaymentEntityLogo(Handle h) noexcept;
public:
    static PaymentEntityLogo take_ownership(Handle h) noexcept;
    explicit PaymentEntityLogo(const emlite::Val &val) noexcept;
    PaymentEntityLogo() noexcept;
    [[nodiscard]] PaymentEntityLogo clone() const noexcept;
    [[nodiscard]] jsbind::String url() const;
    void url(const jsbind::String& value);
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
};

} // namespace webbind