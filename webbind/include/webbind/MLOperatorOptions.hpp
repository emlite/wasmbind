#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLOperatorOptions
class MLOperatorOptions : public emlite::Val {
  explicit MLOperatorOptions(Handle h) noexcept;
public:
    static MLOperatorOptions take_ownership(Handle h) noexcept;
    explicit MLOperatorOptions(const emlite::Val &val) noexcept;
    MLOperatorOptions() noexcept;
    [[nodiscard]] MLOperatorOptions clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::String& value);
};

} // namespace webbind