#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ValidityState
/// [`ValidityState`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState)
class ValidityState : public emlite::Val {
    explicit ValidityState(Handle h) noexcept;
public:
    explicit ValidityState(const emlite::Val &val) noexcept;
    static ValidityState take_ownership(Handle h) noexcept;
    [[nodiscard]] ValidityState clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`ValidityState.valueMissing`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/valueMissing)
    /// [`ValidityState.valueMissing`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/valueMissing)
    [[nodiscard]] bool valueMissing() const;
    /// [`ValidityState.typeMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/typeMismatch)
    /// [`ValidityState.typeMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/typeMismatch)
    [[nodiscard]] bool typeMismatch() const;
    /// [`ValidityState.patternMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/patternMismatch)
    /// [`ValidityState.patternMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/patternMismatch)
    [[nodiscard]] bool patternMismatch() const;
    /// [`ValidityState.tooLong`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/tooLong)
    /// [`ValidityState.tooLong`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/tooLong)
    [[nodiscard]] bool tooLong() const;
    /// [`ValidityState.tooShort`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/tooShort)
    /// [`ValidityState.tooShort`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/tooShort)
    [[nodiscard]] bool tooShort() const;
    /// [`ValidityState.rangeUnderflow`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/rangeUnderflow)
    /// [`ValidityState.rangeUnderflow`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/rangeUnderflow)
    [[nodiscard]] bool rangeUnderflow() const;
    /// [`ValidityState.rangeOverflow`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/rangeOverflow)
    /// [`ValidityState.rangeOverflow`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/rangeOverflow)
    [[nodiscard]] bool rangeOverflow() const;
    /// [`ValidityState.stepMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/stepMismatch)
    /// [`ValidityState.stepMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/stepMismatch)
    [[nodiscard]] bool stepMismatch() const;
    /// [`ValidityState.badInput`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/badInput)
    /// [`ValidityState.badInput`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/badInput)
    [[nodiscard]] bool badInput() const;
    /// [`ValidityState.customError`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/customError)
    /// [`ValidityState.customError`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/customError)
    [[nodiscard]] bool customError() const;
    /// [`ValidityState.valid`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/valid)
    /// [`ValidityState.valid`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/valid)
    [[nodiscard]] bool valid() const;
};

} // namespace webbind