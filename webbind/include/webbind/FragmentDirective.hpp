#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FragmentDirective : public emlite::Val {
    explicit FragmentDirective(Handle h) noexcept;

public:
    explicit FragmentDirective(const emlite::Val &val) noexcept;
    static FragmentDirective take_ownership(Handle h) noexcept;

    FragmentDirective clone() const noexcept;
};

