#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PaymentMethodData
/// [`PaymentMethodData`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentMethodData)
class PaymentMethodData : public emlite::Val {
  explicit PaymentMethodData(Handle h) noexcept;
public:
    static PaymentMethodData take_ownership(Handle h) noexcept;
    explicit PaymentMethodData(const emlite::Val &val) noexcept;
    PaymentMethodData() noexcept;
    [[nodiscard]] PaymentMethodData clone() const noexcept;
    [[nodiscard]] jsbind::String supportedMethods() const;
    void supportedMethods(const jsbind::String& value);
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
};

} // namespace webbind