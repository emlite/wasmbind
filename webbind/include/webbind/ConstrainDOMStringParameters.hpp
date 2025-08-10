#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstrainDOMStringParameters
/// [`ConstrainDOMStringParameters`](https://developer.mozilla.org/en-US/docs/Web/API/ConstrainDOMStringParameters)
class ConstrainDOMStringParameters : public emlite::Val {
  explicit ConstrainDOMStringParameters(Handle h) noexcept;
public:
    static ConstrainDOMStringParameters take_ownership(Handle h) noexcept;
    explicit ConstrainDOMStringParameters(const emlite::Val &val) noexcept;
    ConstrainDOMStringParameters() noexcept;
    [[nodiscard]] ConstrainDOMStringParameters clone() const noexcept;
    [[nodiscard]] jsbind::Any exact() const;
    void exact(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any ideal() const;
    void ideal(const jsbind::Any& value);
};

} // namespace webbind