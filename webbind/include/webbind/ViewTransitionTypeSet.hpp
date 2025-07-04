#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class ViewTransitionTypeSet : public emlite::Val {
    explicit ViewTransitionTypeSet(Handle h) noexcept;

public:
    explicit ViewTransitionTypeSet(const emlite::Val &val) noexcept;
    static ViewTransitionTypeSet take_ownership(Handle h) noexcept;

    ViewTransitionTypeSet clone() const noexcept;
};

