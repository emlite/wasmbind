#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type QueuingStrategyInit
class QueuingStrategyInit : public emlite::Val {
  explicit QueuingStrategyInit(Handle h) noexcept;
public:
    static QueuingStrategyInit take_ownership(Handle h) noexcept;
    explicit QueuingStrategyInit(const emlite::Val &val) noexcept;
    QueuingStrategyInit() noexcept;
    [[nodiscard]] QueuingStrategyInit clone() const noexcept;
    /// Getter of the `highWaterMark` attribute.
    [[nodiscard]] double highWaterMark() const;
    /// Setter of the `highWaterMark` attribute.
    void highWaterMark(double value);
};

} // namespace webbind