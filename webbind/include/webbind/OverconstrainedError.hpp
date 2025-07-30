#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


class OverconstrainedError : public DOMException {
    explicit OverconstrainedError(Handle h) noexcept;

public:
    explicit OverconstrainedError(const emlite::Val &val) noexcept;
    static OverconstrainedError take_ownership(Handle h) noexcept;

    OverconstrainedError clone() const noexcept;
    OverconstrainedError(const jsbind::String& constraint);
    OverconstrainedError(const jsbind::String& constraint, const jsbind::String& message);
    jsbind::String constraint() const;
};

