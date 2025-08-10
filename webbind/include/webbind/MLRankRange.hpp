#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLRankRange
/// [`MLRankRange`](https://developer.mozilla.org/en-US/docs/Web/API/MLRankRange)
class MLRankRange : public emlite::Val {
  explicit MLRankRange(Handle h) noexcept;
public:
    static MLRankRange take_ownership(Handle h) noexcept;
    explicit MLRankRange(const emlite::Val &val) noexcept;
    MLRankRange() noexcept;
    [[nodiscard]] MLRankRange clone() const noexcept;
    [[nodiscard]] unsigned long min() const;
    void min(unsigned long value);
    [[nodiscard]] unsigned long max() const;
    void max(unsigned long value);
};

} // namespace webbind