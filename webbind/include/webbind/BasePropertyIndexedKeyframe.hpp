#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BasePropertyIndexedKeyframe
/// [`BasePropertyIndexedKeyframe`](https://developer.mozilla.org/en-US/docs/Web/API/BasePropertyIndexedKeyframe)
class BasePropertyIndexedKeyframe : public emlite::Val {
  explicit BasePropertyIndexedKeyframe(Handle h) noexcept;
public:
    static BasePropertyIndexedKeyframe take_ownership(Handle h) noexcept;
    explicit BasePropertyIndexedKeyframe(const emlite::Val &val) noexcept;
    BasePropertyIndexedKeyframe() noexcept;
    [[nodiscard]] BasePropertyIndexedKeyframe clone() const noexcept;
    [[nodiscard]] jsbind::Any offset() const;
    void offset(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any easing() const;
    void easing(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any composite() const;
    void composite(const jsbind::Any& value);
};

} // namespace webbind