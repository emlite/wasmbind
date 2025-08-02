#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The TrustedScriptURL class.
/// [`TrustedScriptURL`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedScriptURL)
class TrustedScriptURL : public emlite::Val {
    explicit TrustedScriptURL(Handle h) noexcept;

public:
    explicit TrustedScriptURL(const emlite::Val &val) noexcept;
    static TrustedScriptURL take_ownership(Handle h) noexcept;

    [[nodiscard]] TrustedScriptURL clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`TrustedScriptURL.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedScriptURL/toJSON)
    jsbind::String toJSON();
};

