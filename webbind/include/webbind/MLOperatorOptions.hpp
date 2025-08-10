#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLOperatorOptions
/// [`MLOperatorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperatorOptions)
class MLOperatorOptions : public emlite::Val {
  explicit MLOperatorOptions(Handle h) noexcept;
public:
    static MLOperatorOptions take_ownership(Handle h) noexcept;
    explicit MLOperatorOptions(const emlite::Val &val) noexcept;
    MLOperatorOptions() noexcept;
    [[nodiscard]] MLOperatorOptions clone() const noexcept;
    [[nodiscard]] jsbind::String label() const;
    void label(const jsbind::String& value);
};

} // namespace webbind