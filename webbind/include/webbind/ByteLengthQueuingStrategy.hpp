#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The ByteLengthQueuingStrategy class.
/// [`ByteLengthQueuingStrategy`](https://developer.mozilla.org/en-US/docs/Web/API/ByteLengthQueuingStrategy)
class ByteLengthQueuingStrategy : public emlite::Val {
    explicit ByteLengthQueuingStrategy(Handle h) noexcept;

public:
    explicit ByteLengthQueuingStrategy(const emlite::Val &val) noexcept;
    static ByteLengthQueuingStrategy take_ownership(Handle h) noexcept;

    [[nodiscard]] ByteLengthQueuingStrategy clone() const noexcept;
    /// The `new ByteLengthQueuingStrategy(..)` constructor, creating a new ByteLengthQueuingStrategy instance
    ByteLengthQueuingStrategy(const jsbind::Any& init);
    /// Getter of the `highWaterMark` attribute.
    /// [`ByteLengthQueuingStrategy.highWaterMark`](https://developer.mozilla.org/en-US/docs/Web/API/ByteLengthQueuingStrategy/highWaterMark)
    [[nodiscard]] double highWaterMark() const;
    /// Getter of the `size` attribute.
    /// [`ByteLengthQueuingStrategy.size`](https://developer.mozilla.org/en-US/docs/Web/API/ByteLengthQueuingStrategy/size)
    [[nodiscard]] jsbind::Function size() const;
};

