#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSNumericValue;


class CSSNumericArray : public emlite::Val {
    explicit CSSNumericArray(Handle h) noexcept;

public:
    explicit CSSNumericArray(const emlite::Val &val) noexcept;
    static CSSNumericArray take_ownership(Handle h) noexcept;

    CSSNumericArray clone() const noexcept;
    unsigned long length() const;
};

