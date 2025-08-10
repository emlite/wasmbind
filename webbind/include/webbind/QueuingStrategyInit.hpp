#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QueuingStrategyInit
/// [`QueuingStrategyInit`](https://developer.mozilla.org/en-US/docs/Web/API/QueuingStrategyInit)
class QueuingStrategyInit : public emlite::Val {
  explicit QueuingStrategyInit(Handle h) noexcept;
public:
    static QueuingStrategyInit take_ownership(Handle h) noexcept;
    explicit QueuingStrategyInit(const emlite::Val &val) noexcept;
    QueuingStrategyInit() noexcept;
    [[nodiscard]] QueuingStrategyInit clone() const noexcept;
    [[nodiscard]] double highWaterMark() const;
    void highWaterMark(double value);
};

} // namespace webbind