#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TrustedScript : public emlite::Val {
    explicit TrustedScript(Handle h) noexcept;

public:
    explicit TrustedScript(const emlite::Val &val) noexcept;
    static TrustedScript take_ownership(Handle h) noexcept;

    TrustedScript clone() const noexcept;
    jsbind::DOMString toJSON();
};

