#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentMethodData
class PaymentMethodData : public emlite::Val {
  explicit PaymentMethodData(Handle h) noexcept;
public:
    static PaymentMethodData take_ownership(Handle h) noexcept;
    explicit PaymentMethodData(const emlite::Val &val) noexcept;
    PaymentMethodData() noexcept;
    [[nodiscard]] PaymentMethodData clone() const noexcept;
    /// Getter of the `supportedMethods` attribute.
    [[nodiscard]] jsbind::String supportedMethods() const;
    /// Setter of the `supportedMethods` attribute.
    void supportedMethods(const jsbind::String& value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Object data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Object& value);
};

} // namespace webbind