#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLArgMinMaxOptions
/// [`MLArgMinMaxOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLArgMinMaxOptions)
class MLArgMinMaxOptions : public MLOperatorOptions {
  explicit MLArgMinMaxOptions(Handle h) noexcept;
public:
    static MLArgMinMaxOptions take_ownership(Handle h) noexcept;
    explicit MLArgMinMaxOptions(const emlite::Val &val) noexcept;
    MLArgMinMaxOptions() noexcept;
    [[nodiscard]] MLArgMinMaxOptions clone() const noexcept;
    [[nodiscard]] bool keepDimensions() const;
    void keepDimensions(bool value);
    [[nodiscard]] MLOperandDataType outputDataType() const;
    void outputDataType(const MLOperandDataType& value);
};

} // namespace webbind