#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type URLPatternOptions
/// [`URLPatternOptions`](https://developer.mozilla.org/en-US/docs/Web/API/URLPatternOptions)
class URLPatternOptions : public emlite::Val {
  explicit URLPatternOptions(Handle h) noexcept;
public:
    static URLPatternOptions take_ownership(Handle h) noexcept;
    explicit URLPatternOptions(const emlite::Val &val) noexcept;
    URLPatternOptions() noexcept;
    [[nodiscard]] URLPatternOptions clone() const noexcept;
    [[nodiscard]] bool ignoreCase() const;
    void ignoreCase(bool value);
};

} // namespace webbind