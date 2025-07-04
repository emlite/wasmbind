#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMRect;


class Viewport : public emlite::Val {
    explicit Viewport(Handle h) noexcept;

public:
    explicit Viewport(const emlite::Val &val) noexcept;
    static Viewport take_ownership(Handle h) noexcept;

    Viewport clone() const noexcept;
    jsbind::FrozenArray<DOMRect> segments() const;
};

