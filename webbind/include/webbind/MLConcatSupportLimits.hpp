#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MLTensorLimits;
class MLDataTypeLimits;

/// Dictionary type MLConcatSupportLimits
class MLConcatSupportLimits : public emlite::Val {
  explicit MLConcatSupportLimits(Handle h) noexcept;
public:
    static MLConcatSupportLimits take_ownership(Handle h) noexcept;
    explicit MLConcatSupportLimits(const emlite::Val &val) noexcept;
    MLConcatSupportLimits() noexcept;
    [[nodiscard]] MLConcatSupportLimits clone() const noexcept;
    /// Getter of the `inputs` attribute.
    [[nodiscard]] MLTensorLimits inputs() const;
    /// Setter of the `inputs` attribute.
    void inputs(const MLTensorLimits& value);
    /// Getter of the `output` attribute.
    [[nodiscard]] MLDataTypeLimits output() const;
    /// Setter of the `output` attribute.
    void output(const MLDataTypeLimits& value);
};

} // namespace webbind