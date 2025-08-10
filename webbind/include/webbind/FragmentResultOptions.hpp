#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BreakTokenOptions.hpp"

namespace webbind {

class LayoutFragment;

/// Dictionary type FragmentResultOptions
/// [`FragmentResultOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FragmentResultOptions)
class FragmentResultOptions : public emlite::Val {
  explicit FragmentResultOptions(Handle h) noexcept;
public:
    static FragmentResultOptions take_ownership(Handle h) noexcept;
    explicit FragmentResultOptions(const emlite::Val &val) noexcept;
    FragmentResultOptions() noexcept;
    [[nodiscard]] FragmentResultOptions clone() const noexcept;
    [[nodiscard]] double inlineSize() const;
    void inlineSize(double value);
    [[nodiscard]] double blockSize() const;
    void blockSize(double value);
    [[nodiscard]] double autoBlockSize() const;
    void autoBlockSize(double value);
    [[nodiscard]] jsbind::TypedArray<LayoutFragment> childFragments() const;
    void childFragments(const jsbind::TypedArray<LayoutFragment>& value);
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
    [[nodiscard]] BreakTokenOptions breakToken() const;
    void breakToken(const BreakTokenOptions& value);
};

} // namespace webbind