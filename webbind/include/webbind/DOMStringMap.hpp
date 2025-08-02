#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The DOMStringMap class.
/// [`DOMStringMap`](https://developer.mozilla.org/en-US/docs/Web/API/DOMStringMap)
class DOMStringMap : public emlite::Val {
    explicit DOMStringMap(Handle h) noexcept;

public:
    explicit DOMStringMap(const emlite::Val &val) noexcept;
    static DOMStringMap take_ownership(Handle h) noexcept;

    [[nodiscard]] DOMStringMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

