#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentCredentialInstrument
class PaymentCredentialInstrument : public emlite::Val {
  explicit PaymentCredentialInstrument(Handle h) noexcept;
public:
    static PaymentCredentialInstrument take_ownership(Handle h) noexcept;
    explicit PaymentCredentialInstrument(const emlite::Val &val) noexcept;
    PaymentCredentialInstrument() noexcept;
    [[nodiscard]] PaymentCredentialInstrument clone() const noexcept;
    /// Getter of the `displayName` attribute.
    [[nodiscard]] jsbind::String displayName() const;
    /// Setter of the `displayName` attribute.
    void displayName(const jsbind::String& value);
    /// Getter of the `icon` attribute.
    [[nodiscard]] jsbind::String icon() const;
    /// Setter of the `icon` attribute.
    void icon(const jsbind::String& value);
    /// Getter of the `iconMustBeShown` attribute.
    [[nodiscard]] bool iconMustBeShown() const;
    /// Setter of the `iconMustBeShown` attribute.
    void iconMustBeShown(bool value);
    /// Getter of the `details` attribute.
    [[nodiscard]] jsbind::String details() const;
    /// Setter of the `details` attribute.
    void details(const jsbind::String& value);
};

} // namespace webbind