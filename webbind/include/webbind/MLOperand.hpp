#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MLOperand class.
/// [`MLOperand`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand)
class MLOperand : public emlite::Val {
    explicit MLOperand(Handle h) noexcept;

public:
    explicit MLOperand(const emlite::Val &val) noexcept;
    static MLOperand take_ownership(Handle h) noexcept;

    [[nodiscard]] MLOperand clone() const noexcept;
    /// Getter of the `dataType` attribute.
    /// [`MLOperand.dataType`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand/dataType)
    [[nodiscard]] MLOperandDataType dataType() const;
    /// Getter of the `shape` attribute.
    /// [`MLOperand.shape`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperand/shape)
    [[nodiscard]] jsbind::TypedArray<unsigned long> shape() const;
};

