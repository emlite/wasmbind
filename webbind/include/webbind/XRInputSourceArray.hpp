#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRInputSource;


class XRInputSourceArray : public emlite::Val {
    explicit XRInputSourceArray(Handle h) noexcept;

public:
    explicit XRInputSourceArray(const emlite::Val &val) noexcept;
    static XRInputSourceArray take_ownership(Handle h) noexcept;

    XRInputSourceArray clone() const noexcept;
    unsigned long length() const;
};

