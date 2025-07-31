#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The IntrinsicSizes class.
/// [`IntrinsicSizes`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes)
class IntrinsicSizes : public emlite::Val {
    explicit IntrinsicSizes(Handle h) noexcept;

public:
    explicit IntrinsicSizes(const emlite::Val &val) noexcept;
    static IntrinsicSizes take_ownership(Handle h) noexcept;

    [[nodiscard]] IntrinsicSizes clone() const noexcept;
    /// Getter of the `minContentSize` attribute.
    /// [`IntrinsicSizes.minContentSize`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes/minContentSize)
    [[nodiscard]] double minContentSize() const;
    /// Getter of the `maxContentSize` attribute.
    /// [`IntrinsicSizes.maxContentSize`](https://developer.mozilla.org/en-US/docs/Web/API/IntrinsicSizes/maxContentSize)
    [[nodiscard]] double maxContentSize() const;
};

