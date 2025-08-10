#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstrainDOMStringParameters
class ConstrainDOMStringParameters : public emlite::Val {
  explicit ConstrainDOMStringParameters(Handle h) noexcept;
public:
    static ConstrainDOMStringParameters take_ownership(Handle h) noexcept;
    explicit ConstrainDOMStringParameters(const emlite::Val &val) noexcept;
    ConstrainDOMStringParameters() noexcept;
    [[nodiscard]] ConstrainDOMStringParameters clone() const noexcept;
    /// Getter of the `exact` attribute.
    [[nodiscard]] jsbind::Any exact() const;
    /// Setter of the `exact` attribute.
    void exact(const jsbind::Any& value);
    /// Getter of the `ideal` attribute.
    [[nodiscard]] jsbind::Any ideal() const;
    /// Setter of the `ideal` attribute.
    void ideal(const jsbind::Any& value);
};

} // namespace webbind