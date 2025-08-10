#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BasePropertyIndexedKeyframe
class BasePropertyIndexedKeyframe : public emlite::Val {
  explicit BasePropertyIndexedKeyframe(Handle h) noexcept;
public:
    static BasePropertyIndexedKeyframe take_ownership(Handle h) noexcept;
    explicit BasePropertyIndexedKeyframe(const emlite::Val &val) noexcept;
    BasePropertyIndexedKeyframe() noexcept;
    [[nodiscard]] BasePropertyIndexedKeyframe clone() const noexcept;
    /// Getter of the `offset` attribute.
    [[nodiscard]] jsbind::Any offset() const;
    /// Setter of the `offset` attribute.
    void offset(const jsbind::Any& value);
    /// Getter of the `easing` attribute.
    [[nodiscard]] jsbind::Any easing() const;
    /// Setter of the `easing` attribute.
    void easing(const jsbind::Any& value);
    /// Getter of the `composite` attribute.
    [[nodiscard]] jsbind::Any composite() const;
    /// Setter of the `composite` attribute.
    void composite(const jsbind::Any& value);
};

} // namespace webbind