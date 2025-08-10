#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentCredentialInstrument
/// [`PaymentCredentialInstrument`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentCredentialInstrument)
class PaymentCredentialInstrument : public emlite::Val {
  explicit PaymentCredentialInstrument(Handle h) noexcept;
public:
    static PaymentCredentialInstrument take_ownership(Handle h) noexcept;
    explicit PaymentCredentialInstrument(const emlite::Val &val) noexcept;
    PaymentCredentialInstrument() noexcept;
    [[nodiscard]] PaymentCredentialInstrument clone() const noexcept;
    [[nodiscard]] jsbind::String displayName() const;
    void displayName(const jsbind::String& value);
    [[nodiscard]] jsbind::String icon() const;
    void icon(const jsbind::String& value);
    [[nodiscard]] bool iconMustBeShown() const;
    void iconMustBeShown(bool value);
    [[nodiscard]] jsbind::String details() const;
    void details(const jsbind::String& value);
};

} // namespace webbind