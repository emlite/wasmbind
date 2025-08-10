#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RouterCondition
/// [`RouterCondition`](https://developer.mozilla.org/en-US/docs/Web/API/RouterCondition)
class RouterCondition : public emlite::Val {
  explicit RouterCondition(Handle h) noexcept;
public:
    static RouterCondition take_ownership(Handle h) noexcept;
    explicit RouterCondition(const emlite::Val &val) noexcept;
    RouterCondition() noexcept;
    [[nodiscard]] RouterCondition clone() const noexcept;
    [[nodiscard]] jsbind::Any urlPattern() const;
    void urlPattern(const jsbind::Any& value);
    [[nodiscard]] jsbind::String requestMethod() const;
    void requestMethod(const jsbind::String& value);
    [[nodiscard]] RequestMode requestMode() const;
    void requestMode(const RequestMode& value);
    [[nodiscard]] RequestDestination requestDestination() const;
    void requestDestination(const RequestDestination& value);
    [[nodiscard]] RunningStatus runningStatus() const;
    void runningStatus(const RunningStatus& value);
    [[nodiscard]] jsbind::TypedArray<RouterCondition> or_() const;
    void or_(const jsbind::TypedArray<RouterCondition>& value);
    [[nodiscard]] RouterCondition not_() const;
    void not_(const RouterCondition& value);
};

} // namespace webbind