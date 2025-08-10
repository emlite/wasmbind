#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type IntrinsicSizesResultOptions
class IntrinsicSizesResultOptions : public emlite::Val {
  explicit IntrinsicSizesResultOptions(Handle h) noexcept;
public:
    static IntrinsicSizesResultOptions take_ownership(Handle h) noexcept;
    explicit IntrinsicSizesResultOptions(const emlite::Val &val) noexcept;
    IntrinsicSizesResultOptions() noexcept;
    [[nodiscard]] IntrinsicSizesResultOptions clone() const noexcept;
    /// Getter of the `maxContentSize` attribute.
    [[nodiscard]] double maxContentSize() const;
    /// Setter of the `maxContentSize` attribute.
    void maxContentSize(double value);
    /// Getter of the `minContentSize` attribute.
    [[nodiscard]] double minContentSize() const;
    /// Setter of the `minContentSize` attribute.
    void minContentSize(double value);
};

} // namespace webbind