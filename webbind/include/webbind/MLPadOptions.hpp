#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLPadOptions
class MLPadOptions : public MLOperatorOptions {
  explicit MLPadOptions(Handle h) noexcept;
public:
    static MLPadOptions take_ownership(Handle h) noexcept;
    explicit MLPadOptions(const emlite::Val &val) noexcept;
    MLPadOptions() noexcept;
    [[nodiscard]] MLPadOptions clone() const noexcept;
    /// Getter of the `mode` attribute.
    [[nodiscard]] MLPaddingMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const MLPaddingMode& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::Any& value);
};

} // namespace webbind