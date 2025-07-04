#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Touch;


class TouchList : public emlite::Val {
    explicit TouchList(Handle h) noexcept;

public:
    explicit TouchList(const emlite::Val &val) noexcept;
    static TouchList take_ownership(Handle h) noexcept;

    TouchList clone() const noexcept;
    unsigned long length() const;
    Touch item(unsigned long index);
};

