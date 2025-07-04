#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FontFaceVariationAxis : public emlite::Val {
    explicit FontFaceVariationAxis(Handle h) noexcept;

public:
    explicit FontFaceVariationAxis(const emlite::Val &val) noexcept;
    static FontFaceVariationAxis take_ownership(Handle h) noexcept;

    FontFaceVariationAxis clone() const noexcept;
    jsbind::DOMString name() const;
    jsbind::DOMString axisTag() const;
    double minimumValue() const;
    double maximumValue() const;
    double defaultValue() const;
};

