#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ValidityState : public emlite::Val {
    explicit ValidityState(Handle h) noexcept;

public:
    explicit ValidityState(const emlite::Val &val) noexcept;
    static ValidityState take_ownership(Handle h) noexcept;

    ValidityState clone() const noexcept;
    bool valueMissing() const;
    bool typeMismatch() const;
    bool patternMismatch() const;
    bool tooLong() const;
    bool tooShort() const;
    bool rangeUnderflow() const;
    bool rangeOverflow() const;
    bool stepMismatch() const;
    bool badInput() const;
    bool customError() const;
    bool valid() const;
};

