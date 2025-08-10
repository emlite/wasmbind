#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstantSourceOptions
class ConstantSourceOptions : public emlite::Val {
  explicit ConstantSourceOptions(Handle h) noexcept;
public:
    static ConstantSourceOptions take_ownership(Handle h) noexcept;
    explicit ConstantSourceOptions(const emlite::Val &val) noexcept;
    ConstantSourceOptions() noexcept;
    [[nodiscard]] ConstantSourceOptions clone() const noexcept;
    /// Getter of the `offset` attribute.
    [[nodiscard]] float offset() const;
    /// Setter of the `offset` attribute.
    void offset(float value);
};

} // namespace webbind