#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ValidityStateFlags
class ValidityStateFlags : public emlite::Val {
  explicit ValidityStateFlags(Handle h) noexcept;
public:
    static ValidityStateFlags take_ownership(Handle h) noexcept;
    explicit ValidityStateFlags(const emlite::Val &val) noexcept;
    ValidityStateFlags() noexcept;
    [[nodiscard]] ValidityStateFlags clone() const noexcept;
    /// Getter of the `valueMissing` attribute.
    [[nodiscard]] bool valueMissing() const;
    /// Setter of the `valueMissing` attribute.
    void valueMissing(bool value);
    /// Getter of the `typeMismatch` attribute.
    [[nodiscard]] bool typeMismatch() const;
    /// Setter of the `typeMismatch` attribute.
    void typeMismatch(bool value);
    /// Getter of the `patternMismatch` attribute.
    [[nodiscard]] bool patternMismatch() const;
    /// Setter of the `patternMismatch` attribute.
    void patternMismatch(bool value);
    /// Getter of the `tooLong` attribute.
    [[nodiscard]] bool tooLong() const;
    /// Setter of the `tooLong` attribute.
    void tooLong(bool value);
    /// Getter of the `tooShort` attribute.
    [[nodiscard]] bool tooShort() const;
    /// Setter of the `tooShort` attribute.
    void tooShort(bool value);
    /// Getter of the `rangeUnderflow` attribute.
    [[nodiscard]] bool rangeUnderflow() const;
    /// Setter of the `rangeUnderflow` attribute.
    void rangeUnderflow(bool value);
    /// Getter of the `rangeOverflow` attribute.
    [[nodiscard]] bool rangeOverflow() const;
    /// Setter of the `rangeOverflow` attribute.
    void rangeOverflow(bool value);
    /// Getter of the `stepMismatch` attribute.
    [[nodiscard]] bool stepMismatch() const;
    /// Setter of the `stepMismatch` attribute.
    void stepMismatch(bool value);
    /// Getter of the `badInput` attribute.
    [[nodiscard]] bool badInput() const;
    /// Setter of the `badInput` attribute.
    void badInput(bool value);
    /// Getter of the `customError` attribute.
    [[nodiscard]] bool customError() const;
    /// Setter of the `customError` attribute.
    void customError(bool value);
};

} // namespace webbind