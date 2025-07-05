#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class FragmentResult : public emlite::Val {
    explicit FragmentResult(Handle h) noexcept;

public:
    explicit FragmentResult(const emlite::Val &val) noexcept;
    static FragmentResult take_ownership(Handle h) noexcept;

    FragmentResult clone() const noexcept;
    FragmentResult();
    FragmentResult(const jsbind::Any& options);
    double inlineSize() const;
    double blockSize() const;
};

