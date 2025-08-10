#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PayerErrors
class PayerErrors : public emlite::Val {
  explicit PayerErrors(Handle h) noexcept;
public:
    static PayerErrors take_ownership(Handle h) noexcept;
    explicit PayerErrors(const emlite::Val &val) noexcept;
    PayerErrors() noexcept;
    [[nodiscard]] PayerErrors clone() const noexcept;
    /// Getter of the `email` attribute.
    [[nodiscard]] jsbind::String email() const;
    /// Setter of the `email` attribute.
    void email(const jsbind::String& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `phone` attribute.
    [[nodiscard]] jsbind::String phone() const;
    /// Setter of the `phone` attribute.
    void phone(const jsbind::String& value);
};

} // namespace webbind