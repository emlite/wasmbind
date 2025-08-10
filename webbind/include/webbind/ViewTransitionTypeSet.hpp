#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface ViewTransitionTypeSet
/// [`ViewTransitionTypeSet`](https://developer.mozilla.org/en-US/docs/Web/API/ViewTransitionTypeSet)
class ViewTransitionTypeSet : public emlite::Val {
    explicit ViewTransitionTypeSet(Handle h) noexcept;
public:
    explicit ViewTransitionTypeSet(const emlite::Val &val) noexcept;
    static ViewTransitionTypeSet take_ownership(Handle h) noexcept;
    [[nodiscard]] ViewTransitionTypeSet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind