#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PASignalValue
class PASignalValue : public emlite::Val {
  explicit PASignalValue(Handle h) noexcept;
public:
    static PASignalValue take_ownership(Handle h) noexcept;
    explicit PASignalValue(const emlite::Val &val) noexcept;
    PASignalValue() noexcept;
    [[nodiscard]] PASignalValue clone() const noexcept;
    /// Getter of the `baseValue` attribute.
    [[nodiscard]] jsbind::String baseValue() const;
    /// Setter of the `baseValue` attribute.
    void baseValue(const jsbind::String& value);
    /// Getter of the `scale` attribute.
    [[nodiscard]] double scale() const;
    /// Setter of the `scale` attribute.
    void scale(double value);
    /// Getter of the `offset` attribute.
    [[nodiscard]] jsbind::Any offset() const;
    /// Setter of the `offset` attribute.
    void offset(const jsbind::Any& value);
};

} // namespace webbind