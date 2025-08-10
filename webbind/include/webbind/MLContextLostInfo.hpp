#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLContextLostInfo
/// [`MLContextLostInfo`](https://developer.mozilla.org/en-US/docs/Web/API/MLContextLostInfo)
class MLContextLostInfo : public emlite::Val {
  explicit MLContextLostInfo(Handle h) noexcept;
public:
    static MLContextLostInfo take_ownership(Handle h) noexcept;
    explicit MLContextLostInfo(const emlite::Val &val) noexcept;
    MLContextLostInfo() noexcept;
    [[nodiscard]] MLContextLostInfo clone() const noexcept;
    [[nodiscard]] jsbind::String message() const;
    void message(const jsbind::String& value);
};

} // namespace webbind