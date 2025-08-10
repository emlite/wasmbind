#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class XRInputSource;

/// Interface XRInputSourceArray
/// [`XRInputSourceArray`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceArray)
class XRInputSourceArray : public emlite::Val {
    explicit XRInputSourceArray(Handle h) noexcept;
public:
    explicit XRInputSourceArray(const emlite::Val &val) noexcept;
    static XRInputSourceArray take_ownership(Handle h) noexcept;
    [[nodiscard]] XRInputSourceArray clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`XRInputSourceArray.length`](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSourceArray/length)
    [[nodiscard]] unsigned long length() const;
};

} // namespace webbind