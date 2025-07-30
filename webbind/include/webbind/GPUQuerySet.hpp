#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUQuerySet : public emlite::Val {
    explicit GPUQuerySet(Handle h) noexcept;

public:
    explicit GPUQuerySet(const emlite::Val &val) noexcept;
    static GPUQuerySet take_ownership(Handle h) noexcept;

    GPUQuerySet clone() const noexcept;
    jsbind::Undefined destroy();
    GPUQueryType type() const;
    jsbind::Any count() const;
    jsbind::String label() const;
    void label(const jsbind::String& value);
};

