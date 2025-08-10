#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstrainBooleanOrDOMStringParameters
/// [`ConstrainBooleanOrDOMStringParameters`](https://developer.mozilla.org/en-US/docs/Web/API/ConstrainBooleanOrDOMStringParameters)
class ConstrainBooleanOrDOMStringParameters : public emlite::Val {
  explicit ConstrainBooleanOrDOMStringParameters(Handle h) noexcept;
public:
    static ConstrainBooleanOrDOMStringParameters take_ownership(Handle h) noexcept;
    explicit ConstrainBooleanOrDOMStringParameters(const emlite::Val &val) noexcept;
    ConstrainBooleanOrDOMStringParameters() noexcept;
    [[nodiscard]] ConstrainBooleanOrDOMStringParameters clone() const noexcept;
    [[nodiscard]] jsbind::Any exact() const;
    void exact(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any ideal() const;
    void ideal(const jsbind::Any& value);
};

} // namespace webbind