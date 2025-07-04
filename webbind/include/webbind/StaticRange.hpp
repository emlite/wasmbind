#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AbstractRange.hpp"
#include "enums.hpp"


class StaticRange : public AbstractRange {
    explicit StaticRange(Handle h) noexcept;

public:
    explicit StaticRange(const emlite::Val &val) noexcept;
    static StaticRange take_ownership(Handle h) noexcept;

    StaticRange clone() const noexcept;
    StaticRange(const jsbind::Any& init);
};

