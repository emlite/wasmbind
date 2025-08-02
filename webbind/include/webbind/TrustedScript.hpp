#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The TrustedScript class.
/// [`TrustedScript`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedScript)
class TrustedScript : public emlite::Val {
    explicit TrustedScript(Handle h) noexcept;

public:
    explicit TrustedScript(const emlite::Val &val) noexcept;
    static TrustedScript take_ownership(Handle h) noexcept;

    [[nodiscard]] TrustedScript clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`TrustedScript.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/TrustedScript/toJSON)
    jsbind::String toJSON();
};

