#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RouterCondition
class RouterCondition : public emlite::Val {
  explicit RouterCondition(Handle h) noexcept;
public:
    static RouterCondition take_ownership(Handle h) noexcept;
    explicit RouterCondition(const emlite::Val &val) noexcept;
    RouterCondition() noexcept;
    [[nodiscard]] RouterCondition clone() const noexcept;
    /// Getter of the `urlPattern` attribute.
    [[nodiscard]] jsbind::Any urlPattern() const;
    /// Setter of the `urlPattern` attribute.
    void urlPattern(const jsbind::Any& value);
    /// Getter of the `requestMethod` attribute.
    [[nodiscard]] jsbind::String requestMethod() const;
    /// Setter of the `requestMethod` attribute.
    void requestMethod(const jsbind::String& value);
    /// Getter of the `requestMode` attribute.
    [[nodiscard]] RequestMode requestMode() const;
    /// Setter of the `requestMode` attribute.
    void requestMode(const RequestMode& value);
    /// Getter of the `requestDestination` attribute.
    [[nodiscard]] RequestDestination requestDestination() const;
    /// Setter of the `requestDestination` attribute.
    void requestDestination(const RequestDestination& value);
    /// Getter of the `runningStatus` attribute.
    [[nodiscard]] RunningStatus runningStatus() const;
    /// Setter of the `runningStatus` attribute.
    void runningStatus(const RunningStatus& value);
    /// Getter of the `or` attribute.
    [[nodiscard]] jsbind::TypedArray<RouterCondition> or_() const;
    /// Setter of the `or` attribute.
    void or_(const jsbind::TypedArray<RouterCondition>& value);
    /// Getter of the `not` attribute.
    [[nodiscard]] RouterCondition not_() const;
    /// Setter of the `not` attribute.
    void not_(const RouterCondition& value);
};

} // namespace webbind