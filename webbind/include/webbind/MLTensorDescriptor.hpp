#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperandDescriptor.hpp"

namespace webbind {

/// Dictionary type MLTensorDescriptor
/// [`MLTensorDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/MLTensorDescriptor)
class MLTensorDescriptor : public MLOperandDescriptor {
  explicit MLTensorDescriptor(Handle h) noexcept;
public:
    static MLTensorDescriptor take_ownership(Handle h) noexcept;
    explicit MLTensorDescriptor(const emlite::Val &val) noexcept;
    MLTensorDescriptor() noexcept;
    [[nodiscard]] MLTensorDescriptor clone() const noexcept;
    [[nodiscard]] bool readable() const;
    void readable(bool value);
    [[nodiscard]] bool writable() const;
    void writable(bool value);
};

} // namespace webbind