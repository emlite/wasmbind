#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


/// The OverconstrainedError class.
/// [`OverconstrainedError`](https://developer.mozilla.org/en-US/docs/Web/API/OverconstrainedError)
class OverconstrainedError : public DOMException {
    explicit OverconstrainedError(Handle h) noexcept;

public:
    explicit OverconstrainedError(const emlite::Val &val) noexcept;
    static OverconstrainedError take_ownership(Handle h) noexcept;

    [[nodiscard]] OverconstrainedError clone() const noexcept;
    /// The `new OverconstrainedError(..)` constructor, creating a new OverconstrainedError instance
    OverconstrainedError(const jsbind::String& constraint);
    /// The `new OverconstrainedError(..)` constructor, creating a new OverconstrainedError instance
    OverconstrainedError(const jsbind::String& constraint, const jsbind::String& message);
    /// Getter of the `constraint` attribute.
    /// [`OverconstrainedError.constraint`](https://developer.mozilla.org/en-US/docs/Web/API/OverconstrainedError/constraint)
    [[nodiscard]] jsbind::String constraint() const;
};

