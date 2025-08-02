#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


/// The CSSUnparsedValue class.
/// [`CSSUnparsedValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnparsedValue)
class CSSUnparsedValue : public CSSStyleValue {
    explicit CSSUnparsedValue(Handle h) noexcept;

public:
    explicit CSSUnparsedValue(const emlite::Val &val) noexcept;
    static CSSUnparsedValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSUnparsedValue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSUnparsedValue(..)` constructor, creating a new CSSUnparsedValue instance
    CSSUnparsedValue(const jsbind::TypedArray<jsbind::Any>& members);
    /// Getter of the `length` attribute.
    /// [`CSSUnparsedValue.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSUnparsedValue/length)
    [[nodiscard]] unsigned long length() const;
};

