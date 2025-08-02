#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ShadowRoot.hpp"
#include "enums.hpp"


/// The SVGUseElementShadowRoot class.
/// [`SVGUseElementShadowRoot`](https://developer.mozilla.org/en-US/docs/Web/API/SVGUseElementShadowRoot)
class SVGUseElementShadowRoot : public ShadowRoot {
    explicit SVGUseElementShadowRoot(Handle h) noexcept;

public:
    explicit SVGUseElementShadowRoot(const emlite::Val &val) noexcept;
    static SVGUseElementShadowRoot take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGUseElementShadowRoot clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

