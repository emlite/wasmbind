#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RouterCondition;

/// Dictionary type RouterRule
class RouterRule : public emlite::Val {
  explicit RouterRule(Handle h) noexcept;
public:
    static RouterRule take_ownership(Handle h) noexcept;
    explicit RouterRule(const emlite::Val &val) noexcept;
    RouterRule() noexcept;
    [[nodiscard]] RouterRule clone() const noexcept;
    /// Getter of the `condition` attribute.
    [[nodiscard]] RouterCondition condition() const;
    /// Setter of the `condition` attribute.
    void condition(const RouterCondition& value);
    /// Getter of the `source` attribute.
    [[nodiscard]] jsbind::Any source() const;
    /// Setter of the `source` attribute.
    void source(const jsbind::Any& value);
};

} // namespace webbind