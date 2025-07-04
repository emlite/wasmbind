#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class XRAnchorSet : public emlite::Val {
    explicit XRAnchorSet(Handle h) noexcept;

public:
    explicit XRAnchorSet(const emlite::Val &val) noexcept;
    static XRAnchorSet take_ownership(Handle h) noexcept;

    XRAnchorSet clone() const noexcept;
};

