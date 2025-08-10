#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface TrustedHTML
/// [`TrustedHTML`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedHTML)
class TrustedHTML : public emlite::Val {
    explicit TrustedHTML(Handle h) noexcept;
public:
    explicit TrustedHTML(const emlite::Val &val) noexcept;
    static TrustedHTML take_ownership(Handle h) noexcept;
    [[nodiscard]] TrustedHTML clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`TrustedHTML.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedHTML/toJSON)
    jsbind::String toJSON();
};

} // namespace webbind