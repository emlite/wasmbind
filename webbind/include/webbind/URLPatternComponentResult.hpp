#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type URLPatternComponentResult
/// [`URLPatternComponentResult`](https://developer.mozilla.org/en-US/docs/Web/API/URLPatternComponentResult)
class URLPatternComponentResult : public emlite::Val {
  explicit URLPatternComponentResult(Handle h) noexcept;
public:
    static URLPatternComponentResult take_ownership(Handle h) noexcept;
    explicit URLPatternComponentResult(const emlite::Val &val) noexcept;
    URLPatternComponentResult() noexcept;
    [[nodiscard]] URLPatternComponentResult clone() const noexcept;
    [[nodiscard]] jsbind::String input() const;
    void input(const jsbind::String& value);
    [[nodiscard]] jsbind::Record<jsbind::String, jsbind::Any> groups() const;
    void groups(const jsbind::Record<jsbind::String, jsbind::Any>& value);
};

} // namespace webbind