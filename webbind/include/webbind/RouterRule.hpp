#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RouterCondition.hpp"

namespace webbind {

/// Dictionary type RouterRule
/// [`RouterRule`](https://developer.mozilla.org/en-US/docs/Web/API/RouterRule)
class RouterRule : public emlite::Val {
  explicit RouterRule(Handle h) noexcept;
public:
    static RouterRule take_ownership(Handle h) noexcept;
    explicit RouterRule(const emlite::Val &val) noexcept;
    RouterRule() noexcept;
    [[nodiscard]] RouterRule clone() const noexcept;
    [[nodiscard]] RouterCondition condition() const;
    void condition(const RouterCondition& value);
    [[nodiscard]] jsbind::Any source() const;
    void source(const jsbind::Any& value);
};

} // namespace webbind