#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface MLTensor
/// [`MLTensor`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor)
class MLTensor : public emlite::Val {
    explicit MLTensor(Handle h) noexcept;
public:
    explicit MLTensor(const emlite::Val &val) noexcept;
    static MLTensor take_ownership(Handle h) noexcept;
    [[nodiscard]] MLTensor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `dataType` attribute.
    /// [`MLTensor.dataType`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor/dataType)
    [[nodiscard]] MLOperandDataType dataType() const;
    /// Getter of the `shape` attribute.
    /// [`MLTensor.shape`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor/shape)
    [[nodiscard]] jsbind::TypedArray<unsigned long> shape() const;
    /// Getter of the `readable` attribute.
    /// [`MLTensor.readable`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor/readable)
    [[nodiscard]] bool readable() const;
    /// Getter of the `writable` attribute.
    /// [`MLTensor.writable`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor/writable)
    [[nodiscard]] bool writable() const;
    /// Getter of the `constant` attribute.
    /// [`MLTensor.constant`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor/constant)
    [[nodiscard]] bool constant() const;
    /// The destroy method.
    /// [`MLTensor.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensor/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind