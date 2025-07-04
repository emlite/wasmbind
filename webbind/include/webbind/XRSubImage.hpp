#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRViewport;


class XRSubImage : public emlite::Val {
    explicit XRSubImage(Handle h) noexcept;

public:
    explicit XRSubImage(const emlite::Val &val) noexcept;
    static XRSubImage take_ownership(Handle h) noexcept;

    XRSubImage clone() const noexcept;
    XRViewport viewport() const;
};

