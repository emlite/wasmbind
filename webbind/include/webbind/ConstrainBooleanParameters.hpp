#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstrainBooleanParameters
/// [`ConstrainBooleanParameters`](https://developer.mozilla.org/en-US/docs/Web/API/ConstrainBooleanParameters)
class ConstrainBooleanParameters : public emlite::Val {
  explicit ConstrainBooleanParameters(Handle h) noexcept;
public:
    static ConstrainBooleanParameters take_ownership(Handle h) noexcept;
    explicit ConstrainBooleanParameters(const emlite::Val &val) noexcept;
    ConstrainBooleanParameters() noexcept;
    [[nodiscard]] ConstrainBooleanParameters clone() const noexcept;
    [[nodiscard]] bool exact() const;
    void exact(bool value);
    [[nodiscard]] bool ideal() const;
    void ideal(bool value);
};

} // namespace webbind