#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The FragmentResult class.
/// [`FragmentResult`](https://developer.mozilla.org/en-US/docs/Web/API/FragmentResult)
class FragmentResult : public emlite::Val {
    explicit FragmentResult(Handle h) noexcept;

public:
    explicit FragmentResult(const emlite::Val &val) noexcept;
    static FragmentResult take_ownership(Handle h) noexcept;

    [[nodiscard]] FragmentResult clone() const noexcept;
    /// The `new FragmentResult(..)` constructor, creating a new FragmentResult instance
    FragmentResult();
    /// The `new FragmentResult(..)` constructor, creating a new FragmentResult instance
    FragmentResult(const jsbind::Any& options);
    /// Getter of the `inlineSize` attribute.
    /// [`FragmentResult.inlineSize`](https://developer.mozilla.org/en-US/docs/Web/API/FragmentResult/inlineSize)
    [[nodiscard]] double inlineSize() const;
    /// Getter of the `blockSize` attribute.
    /// [`FragmentResult.blockSize`](https://developer.mozilla.org/en-US/docs/Web/API/FragmentResult/blockSize)
    [[nodiscard]] double blockSize() const;
};

