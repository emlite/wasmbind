#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstrainBooleanParameters
class ConstrainBooleanParameters : public emlite::Val {
  explicit ConstrainBooleanParameters(Handle h) noexcept;
public:
    static ConstrainBooleanParameters take_ownership(Handle h) noexcept;
    explicit ConstrainBooleanParameters(const emlite::Val &val) noexcept;
    ConstrainBooleanParameters() noexcept;
    [[nodiscard]] ConstrainBooleanParameters clone() const noexcept;
    /// Getter of the `exact` attribute.
    [[nodiscard]] bool exact() const;
    /// Setter of the `exact` attribute.
    void exact(bool value);
    /// Getter of the `ideal` attribute.
    [[nodiscard]] bool ideal() const;
    /// Setter of the `ideal` attribute.
    void ideal(bool value);
};

} // namespace webbind