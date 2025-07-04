#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class DOMStringMap : public emlite::Val {
    explicit DOMStringMap(Handle h) noexcept;

public:
    explicit DOMStringMap(const emlite::Val &val) noexcept;
    static DOMStringMap take_ownership(Handle h) noexcept;

    DOMStringMap clone() const noexcept;
};

