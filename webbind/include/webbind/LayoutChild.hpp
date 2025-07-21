#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class StylePropertyMapReadOnly;
class IntrinsicSizes;
class LayoutFragment;
class LayoutConstraintsOptions;
class ChildBreakToken;


class LayoutConstraintsOptions : public emlite::Val {
  explicit LayoutConstraintsOptions(Handle h) noexcept;
public:
    static LayoutConstraintsOptions take_ownership(Handle h) noexcept;
    explicit LayoutConstraintsOptions(const emlite::Val &val) noexcept;
    LayoutConstraintsOptions() noexcept;
    LayoutConstraintsOptions clone() const noexcept;
    double availableInlineSize() const;
    void availableInlineSize(double value);
    double availableBlockSize() const;
    void availableBlockSize(double value);
    double fixedInlineSize() const;
    void fixedInlineSize(double value);
    double fixedBlockSize() const;
    void fixedBlockSize(double value);
    double percentageInlineSize() const;
    void percentageInlineSize(double value);
    double percentageBlockSize() const;
    void percentageBlockSize(double value);
    double blockFragmentationOffset() const;
    void blockFragmentationOffset(double value);
    BlockFragmentationType blockFragmentationType() const;
    void blockFragmentationType(const BlockFragmentationType& value);
    jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

class LayoutChild : public emlite::Val {
    explicit LayoutChild(Handle h) noexcept;

public:
    explicit LayoutChild(const emlite::Val &val) noexcept;
    static LayoutChild take_ownership(Handle h) noexcept;

    LayoutChild clone() const noexcept;
    StylePropertyMapReadOnly styleMap() const;
    jsbind::Promise<IntrinsicSizes> intrinsicSizes();
    jsbind::Promise<LayoutFragment> layoutNextFragment(const LayoutConstraintsOptions& constraints, const ChildBreakToken& breakToken);
};

