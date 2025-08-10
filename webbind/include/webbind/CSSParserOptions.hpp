#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSParserOptions
/// [`CSSParserOptions`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserOptions)
class CSSParserOptions : public emlite::Val {
  explicit CSSParserOptions(Handle h) noexcept;
public:
    static CSSParserOptions take_ownership(Handle h) noexcept;
    explicit CSSParserOptions(const emlite::Val &val) noexcept;
    CSSParserOptions() noexcept;
    [[nodiscard]] CSSParserOptions clone() const noexcept;
    [[nodiscard]] jsbind::Object atRules() const;
    void atRules(const jsbind::Object& value);
};

} // namespace webbind