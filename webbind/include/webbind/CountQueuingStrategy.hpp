#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The CountQueuingStrategy class.
/// [`CountQueuingStrategy`](https://developer.mozilla.org/en-US/docs/Web/API/CountQueuingStrategy)
class CountQueuingStrategy : public emlite::Val {
    explicit CountQueuingStrategy(Handle h) noexcept;

public:
    explicit CountQueuingStrategy(const emlite::Val &val) noexcept;
    static CountQueuingStrategy take_ownership(Handle h) noexcept;

    [[nodiscard]] CountQueuingStrategy clone() const noexcept;
    /// The `new CountQueuingStrategy(..)` constructor, creating a new CountQueuingStrategy instance
    CountQueuingStrategy(const jsbind::Any& init);
    /// Getter of the `highWaterMark` attribute.
    /// [`CountQueuingStrategy.highWaterMark`](https://developer.mozilla.org/en-US/docs/Web/API/CountQueuingStrategy/highWaterMark)
    [[nodiscard]] double highWaterMark() const;
    /// Getter of the `size` attribute.
    /// [`CountQueuingStrategy.size`](https://developer.mozilla.org/en-US/docs/Web/API/CountQueuingStrategy/size)
    [[nodiscard]] jsbind::Function size() const;
};

