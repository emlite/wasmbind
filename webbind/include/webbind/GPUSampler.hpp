#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUSampler : public emlite::Val {
    explicit GPUSampler(Handle h) noexcept;

public:
    explicit GPUSampler(const emlite::Val &val) noexcept;
    static GPUSampler take_ownership(Handle h) noexcept;

    GPUSampler clone() const noexcept;
    jsbind::String label() const;
    void label(const jsbind::String& value);
};

