#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The CustomStateSet class.
/// [`CustomStateSet`](https://developer.mozilla.org/en-US/docs/Web/API/CustomStateSet)
class CustomStateSet : public emlite::Val {
    explicit CustomStateSet(Handle h) noexcept;

public:
    explicit CustomStateSet(const emlite::Val &val) noexcept;
    static CustomStateSet take_ownership(Handle h) noexcept;

    [[nodiscard]] CustomStateSet clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

