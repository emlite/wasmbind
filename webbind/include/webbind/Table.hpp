#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Table : public emlite::Val {
    explicit Table(Handle h) noexcept;

public:
    explicit Table(const emlite::Val &val) noexcept;
    static Table take_ownership(Handle h) noexcept;

    Table clone() const noexcept;
    Table(const jsbind::Any& descriptor, const jsbind::Any& value);
    unsigned long grow(unsigned long delta, const jsbind::Any& value);
    jsbind::Any get(unsigned long index);
    jsbind::Undefined set(unsigned long index, const jsbind::Any& value);
    unsigned long length() const;
};

