#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLContextLostInfo
class MLContextLostInfo : public emlite::Val {
  explicit MLContextLostInfo(Handle h) noexcept;
public:
    static MLContextLostInfo take_ownership(Handle h) noexcept;
    explicit MLContextLostInfo(const emlite::Val &val) noexcept;
    MLContextLostInfo() noexcept;
    [[nodiscard]] MLContextLostInfo clone() const noexcept;
    /// Getter of the `message` attribute.
    [[nodiscard]] jsbind::String message() const;
    /// Setter of the `message` attribute.
    void message(const jsbind::String& value);
};

} // namespace webbind