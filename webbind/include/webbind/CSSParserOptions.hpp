#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CSSParserOptions
class CSSParserOptions : public emlite::Val {
  explicit CSSParserOptions(Handle h) noexcept;
public:
    static CSSParserOptions take_ownership(Handle h) noexcept;
    explicit CSSParserOptions(const emlite::Val &val) noexcept;
    CSSParserOptions() noexcept;
    [[nodiscard]] CSSParserOptions clone() const noexcept;
    /// Getter of the `atRules` attribute.
    [[nodiscard]] jsbind::Object atRules() const;
    /// Setter of the `atRules` attribute.
    void atRules(const jsbind::Object& value);
};

} // namespace webbind