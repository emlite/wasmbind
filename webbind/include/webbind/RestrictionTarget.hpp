#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RestrictionTarget;
class Element;


class RestrictionTarget : public emlite::Val {
    explicit RestrictionTarget(Handle h) noexcept;

public:
    explicit RestrictionTarget(const emlite::Val &val) noexcept;
    static RestrictionTarget take_ownership(Handle h) noexcept;

    RestrictionTarget clone() const noexcept;
    static jsbind::Promise<RestrictionTarget> fromElement(const Element& element);
};

