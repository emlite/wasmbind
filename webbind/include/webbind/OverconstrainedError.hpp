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
    OverconstrainedError(const jsbind::DOMString& constraint);
    OverconstrainedError(const jsbind::DOMString& constraint, const jsbind::DOMString& message);
    jsbind::DOMString constraint() const;
};

