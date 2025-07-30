#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class TrustedHTML : public emlite::Val {
    explicit TrustedHTML(Handle h) noexcept;

public:
    explicit TrustedHTML(const emlite::Val &val) noexcept;
    static TrustedHTML take_ownership(Handle h) noexcept;

    TrustedHTML clone() const noexcept;
    jsbind::String toJSON();
};

