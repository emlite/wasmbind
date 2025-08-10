#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class CSSNumericValue;

/// Interface CSSNumericArray
/// [`CSSNumericArray`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericArray)
class CSSNumericArray : public emlite::Val {
    explicit CSSNumericArray(Handle h) noexcept;
public:
    explicit CSSNumericArray(const emlite::Val &val) noexcept;
    static CSSNumericArray take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSNumericArray clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`CSSNumericArray.length`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericArray/length)
    [[nodiscard]] unsigned long length() const;
};

} // namespace webbind