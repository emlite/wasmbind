#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Memory : public emlite::Val {
    explicit Memory(Handle h) noexcept;

public:
    explicit Memory(const emlite::Val &val) noexcept;
    static Memory take_ownership(Handle h) noexcept;

    Memory clone() const noexcept;
    Memory(const jsbind::Any& descriptor);
    unsigned long grow(unsigned long delta);
    jsbind::ArrayBuffer toFixedLengthBuffer();
    jsbind::ArrayBuffer toResizableBuffer();
    jsbind::ArrayBuffer buffer() const;
};

