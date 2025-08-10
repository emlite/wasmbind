#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperandDescriptor.hpp"

namespace webbind {

/// Dictionary type MLTensorDescriptor
class MLTensorDescriptor : public MLOperandDescriptor {
  explicit MLTensorDescriptor(Handle h) noexcept;
public:
    static MLTensorDescriptor take_ownership(Handle h) noexcept;
    explicit MLTensorDescriptor(const emlite::Val &val) noexcept;
    MLTensorDescriptor() noexcept;
    [[nodiscard]] MLTensorDescriptor clone() const noexcept;
    /// Getter of the `readable` attribute.
    [[nodiscard]] bool readable() const;
    /// Setter of the `readable` attribute.
    void readable(bool value);
    /// Getter of the `writable` attribute.
    [[nodiscard]] bool writable() const;
    /// Setter of the `writable` attribute.
    void writable(bool value);
};

} // namespace webbind