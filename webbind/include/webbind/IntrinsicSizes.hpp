#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface IntrinsicSizes
/// [`IntrinsicSizes`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes)
class IntrinsicSizes : public emlite::Val {
    explicit IntrinsicSizes(Handle h) noexcept;
public:
    explicit IntrinsicSizes(const emlite::Val &val) noexcept;
    static IntrinsicSizes take_ownership(Handle h) noexcept;
    [[nodiscard]] IntrinsicSizes clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`IntrinsicSizes.minContentSize`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes/minContentSize)
    /// [`IntrinsicSizes.minContentSize`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes/minContentSize)
    [[nodiscard]] double minContentSize() const;
    /// [`IntrinsicSizes.maxContentSize`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes/maxContentSize)
    /// [`IntrinsicSizes.maxContentSize`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes/maxContentSize)
    [[nodiscard]] double maxContentSize() const;
};

} // namespace webbind