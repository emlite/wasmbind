#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QuotaExceededErrorOptions
class QuotaExceededErrorOptions : public emlite::Val {
  explicit QuotaExceededErrorOptions(Handle h) noexcept;
public:
    static QuotaExceededErrorOptions take_ownership(Handle h) noexcept;
    explicit QuotaExceededErrorOptions(const emlite::Val &val) noexcept;
    QuotaExceededErrorOptions() noexcept;
    [[nodiscard]] QuotaExceededErrorOptions clone() const noexcept;
    /// Getter of the `quota` attribute.
    [[nodiscard]] double quota() const;
    /// Setter of the `quota` attribute.
    void quota(double value);
    /// Getter of the `requested` attribute.
    [[nodiscard]] double requested() const;
    /// Setter of the `requested` attribute.
    void requested(double value);
};

} // namespace webbind