#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ValidityState class.
/// [`ValidityState`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState)
class ValidityState : public emlite::Val {
    explicit ValidityState(Handle h) noexcept;

public:
    explicit ValidityState(const emlite::Val &val) noexcept;
    static ValidityState take_ownership(Handle h) noexcept;

    [[nodiscard]] ValidityState clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `valueMissing` attribute.
    /// [`ValidityState.valueMissing`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/valueMissing)
    [[nodiscard]] bool valueMissing() const;
    /// Getter of the `typeMismatch` attribute.
    /// [`ValidityState.typeMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/typeMismatch)
    [[nodiscard]] bool typeMismatch() const;
    /// Getter of the `patternMismatch` attribute.
    /// [`ValidityState.patternMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/patternMismatch)
    [[nodiscard]] bool patternMismatch() const;
    /// Getter of the `tooLong` attribute.
    /// [`ValidityState.tooLong`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/tooLong)
    [[nodiscard]] bool tooLong() const;
    /// Getter of the `tooShort` attribute.
    /// [`ValidityState.tooShort`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/tooShort)
    [[nodiscard]] bool tooShort() const;
    /// Getter of the `rangeUnderflow` attribute.
    /// [`ValidityState.rangeUnderflow`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/rangeUnderflow)
    [[nodiscard]] bool rangeUnderflow() const;
    /// Getter of the `rangeOverflow` attribute.
    /// [`ValidityState.rangeOverflow`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/rangeOverflow)
    [[nodiscard]] bool rangeOverflow() const;
    /// Getter of the `stepMismatch` attribute.
    /// [`ValidityState.stepMismatch`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/stepMismatch)
    [[nodiscard]] bool stepMismatch() const;
    /// Getter of the `badInput` attribute.
    /// [`ValidityState.badInput`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/badInput)
    [[nodiscard]] bool badInput() const;
    /// Getter of the `customError` attribute.
    /// [`ValidityState.customError`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/customError)
    [[nodiscard]] bool customError() const;
    /// Getter of the `valid` attribute.
    /// [`ValidityState.valid`](https://developer.mozilla.org/en-US/docs/Web/API/ValidityState/valid)
    [[nodiscard]] bool valid() const;
};

