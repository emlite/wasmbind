#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type URLPatternComponentResult
class URLPatternComponentResult : public emlite::Val {
  explicit URLPatternComponentResult(Handle h) noexcept;
public:
    static URLPatternComponentResult take_ownership(Handle h) noexcept;
    explicit URLPatternComponentResult(const emlite::Val &val) noexcept;
    URLPatternComponentResult() noexcept;
    [[nodiscard]] URLPatternComponentResult clone() const noexcept;
    /// Getter of the `input` attribute.
    [[nodiscard]] jsbind::String input() const;
    /// Setter of the `input` attribute.
    void input(const jsbind::String& value);
    /// Getter of the `groups` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> groups() const;
    /// Setter of the `groups` attribute.
    void groups(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

} // namespace webbind