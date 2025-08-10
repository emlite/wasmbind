#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ValidityStateFlags
/// [`ValidityStateFlags`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityStateFlags)
class ValidityStateFlags : public emlite::Val {
  explicit ValidityStateFlags(Handle h) noexcept;
public:
    static ValidityStateFlags take_ownership(Handle h) noexcept;
    explicit ValidityStateFlags(const emlite::Val &val) noexcept;
    ValidityStateFlags() noexcept;
    [[nodiscard]] ValidityStateFlags clone() const noexcept;
    [[nodiscard]] bool valueMissing() const;
    void valueMissing(bool value);
    [[nodiscard]] bool typeMismatch() const;
    void typeMismatch(bool value);
    [[nodiscard]] bool patternMismatch() const;
    void patternMismatch(bool value);
    [[nodiscard]] bool tooLong() const;
    void tooLong(bool value);
    [[nodiscard]] bool tooShort() const;
    void tooShort(bool value);
    [[nodiscard]] bool rangeUnderflow() const;
    void rangeUnderflow(bool value);
    [[nodiscard]] bool rangeOverflow() const;
    void rangeOverflow(bool value);
    [[nodiscard]] bool stepMismatch() const;
    void stepMismatch(bool value);
    [[nodiscard]] bool badInput() const;
    void badInput(bool value);
    [[nodiscard]] bool customError() const;
    void customError(bool value);
};

} // namespace webbind