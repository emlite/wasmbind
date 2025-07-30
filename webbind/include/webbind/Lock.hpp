#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Lock : public emlite::Val {
    explicit Lock(Handle h) noexcept;

public:
    explicit Lock(const emlite::Val &val) noexcept;
    static Lock take_ownership(Handle h) noexcept;

    Lock clone() const noexcept;
    jsbind::String name() const;
    LockMode mode() const;
};

