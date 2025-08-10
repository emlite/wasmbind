#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface MLOperand
/// [`MLOperand`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand)
class MLOperand : public emlite::Val {
    explicit MLOperand(Handle h) noexcept;
public:
    explicit MLOperand(const emlite::Val &val) noexcept;
    static MLOperand take_ownership(Handle h) noexcept;
    [[nodiscard]] MLOperand clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`MLOperand.dataType`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand/dataType)
    /// [`MLOperand.dataType`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand/dataType)
    [[nodiscard]] MLOperandDataType dataType() const;
    /// [`MLOperand.shape`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand/shape)
    /// [`MLOperand.shape`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand/shape)
    [[nodiscard]] jsbind::TypedArray<unsigned long> shape() const;
};

} // namespace webbind