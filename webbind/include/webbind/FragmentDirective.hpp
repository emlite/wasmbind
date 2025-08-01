#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FragmentDirective class.
/// [`FragmentDirective`](https://developer.mozilla.org/en-US/docs/Web/API/FragmentDirective)
class FragmentDirective : public emlite::Val {
    explicit FragmentDirective(Handle h) noexcept;

public:
    explicit FragmentDirective(const emlite::Val &val) noexcept;
    static FragmentDirective take_ownership(Handle h) noexcept;

    [[nodiscard]] FragmentDirective clone() const noexcept;
};

