#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ShadowRoot.hpp"
#include "enums.hpp"


class SVGUseElementShadowRoot : public ShadowRoot {
    explicit SVGUseElementShadowRoot(Handle h) noexcept;

public:
    explicit SVGUseElementShadowRoot(const emlite::Val &val) noexcept;
    static SVGUseElementShadowRoot take_ownership(Handle h) noexcept;

    SVGUseElementShadowRoot clone() const noexcept;
};

