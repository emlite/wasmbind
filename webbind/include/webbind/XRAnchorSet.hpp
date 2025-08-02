#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The XRAnchorSet class.
/// [`XRAnchorSet`](https://developer.mozilla.org/en-US/docs/Web/API/XRAnchorSet)
class XRAnchorSet : public emlite::Val {
    explicit XRAnchorSet(Handle h) noexcept;

public:
    explicit XRAnchorSet(const emlite::Val &val) noexcept;
    static XRAnchorSet take_ownership(Handle h) noexcept;

    [[nodiscard]] XRAnchorSet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

