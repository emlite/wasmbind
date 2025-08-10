#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IntrinsicSizesResultOptions
/// [`IntrinsicSizesResultOptions`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizesResultOptions)
class IntrinsicSizesResultOptions : public emlite::Val {
  explicit IntrinsicSizesResultOptions(Handle h) noexcept;
public:
    static IntrinsicSizesResultOptions take_ownership(Handle h) noexcept;
    explicit IntrinsicSizesResultOptions(const emlite::Val &val) noexcept;
    IntrinsicSizesResultOptions() noexcept;
    [[nodiscard]] IntrinsicSizesResultOptions clone() const noexcept;
    [[nodiscard]] double maxContentSize() const;
    void maxContentSize(double value);
    [[nodiscard]] double minContentSize() const;
    void minContentSize(double value);
};

} // namespace webbind