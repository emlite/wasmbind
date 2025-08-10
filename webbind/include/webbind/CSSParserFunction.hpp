#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSParserValue.hpp"

namespace webbind {

/// Interface CSSParserFunction
/// [`CSSParserFunction`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserFunction)
class CSSParserFunction : public CSSParserValue {
    explicit CSSParserFunction(Handle h) noexcept;
public:
    explicit CSSParserFunction(const emlite::Val &val) noexcept;
    static CSSParserFunction take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSParserFunction clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSParserFunction(..)` constructor, creating a new CSSParserFunction instance
    CSSParserFunction(const jsbind::String& name, const jsbind::TypedArray<jsbind::TypedArray<CSSParserValue>>& args);
    /// Getter of the `name` attribute.
    /// [`CSSParserFunction.name`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserFunction/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `args` attribute.
    /// [`CSSParserFunction.args`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserFunction/args)
    [[nodiscard]] jsbind::TypedArray<jsbind::TypedArray<CSSParserValue>> args() const;
};

} // namespace webbind