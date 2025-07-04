#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class UserActivation : public emlite::Val {
    explicit UserActivation(Handle h) noexcept;

public:
    explicit UserActivation(const emlite::Val &val) noexcept;
    static UserActivation take_ownership(Handle h) noexcept;

    UserActivation clone() const noexcept;
    bool hasBeenActive() const;
    bool isActive() const;
};

