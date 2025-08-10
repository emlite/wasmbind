#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentEntityLogo
class PaymentEntityLogo : public emlite::Val {
  explicit PaymentEntityLogo(Handle h) noexcept;
public:
    static PaymentEntityLogo take_ownership(Handle h) noexcept;
    explicit PaymentEntityLogo(const emlite::Val &val) noexcept;
    PaymentEntityLogo() noexcept;
    [[nodiscard]] PaymentEntityLogo clone() const noexcept;
    /// Getter of the `url` attribute.
    [[nodiscard]] jsbind::String url() const;
    /// Setter of the `url` attribute.
    void url(const jsbind::String& value);
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
};

} // namespace webbind