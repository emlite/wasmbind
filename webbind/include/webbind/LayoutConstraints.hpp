#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class LayoutConstraints : public emlite::Val {
    explicit LayoutConstraints(Handle h) noexcept;

public:
    explicit LayoutConstraints(const emlite::Val &val) noexcept;
    static LayoutConstraints take_ownership(Handle h) noexcept;

    LayoutConstraints clone() const noexcept;
    double availableInlineSize() const;
    double availableBlockSize() const;
    double fixedInlineSize() const;
    double fixedBlockSize() const;
    double percentageInlineSize() const;
    double percentageBlockSize() const;
    double blockFragmentationOffset() const;
    BlockFragmentationType blockFragmentationType() const;
    jsbind::Any data() const;
};

