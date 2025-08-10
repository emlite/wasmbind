#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLArgMinMaxOptions
class MLArgMinMaxOptions : public MLOperatorOptions {
  explicit MLArgMinMaxOptions(Handle h) noexcept;
public:
    static MLArgMinMaxOptions take_ownership(Handle h) noexcept;
    explicit MLArgMinMaxOptions(const emlite::Val &val) noexcept;
    MLArgMinMaxOptions() noexcept;
    [[nodiscard]] MLArgMinMaxOptions clone() const noexcept;
    /// Getter of the `keepDimensions` attribute.
    [[nodiscard]] bool keepDimensions() const;
    /// Setter of the `keepDimensions` attribute.
    void keepDimensions(bool value);
    /// Getter of the `outputDataType` attribute.
    [[nodiscard]] MLOperandDataType outputDataType() const;
    /// Setter of the `outputDataType` attribute.
    void outputDataType(const MLOperandDataType& value);
};

} // namespace webbind