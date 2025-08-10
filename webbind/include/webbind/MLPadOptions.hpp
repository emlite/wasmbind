#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLPadOptions
/// [`MLPadOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLPadOptions)
class MLPadOptions : public MLOperatorOptions {
  explicit MLPadOptions(Handle h) noexcept;
public:
    static MLPadOptions take_ownership(Handle h) noexcept;
    explicit MLPadOptions(const emlite::Val &val) noexcept;
    MLPadOptions() noexcept;
    [[nodiscard]] MLPadOptions clone() const noexcept;
    [[nodiscard]] MLPaddingMode mode() const;
    void mode(const MLPaddingMode& value);
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
};

} // namespace webbind