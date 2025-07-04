#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SourceBuffer.hpp"
#include "enums.hpp"


class ManagedSourceBuffer : public SourceBuffer {
    explicit ManagedSourceBuffer(Handle h) noexcept;

public:
    explicit ManagedSourceBuffer(const emlite::Val &val) noexcept;
    static ManagedSourceBuffer take_ownership(Handle h) noexcept;

    ManagedSourceBuffer clone() const noexcept;
    jsbind::Any onbufferedchange() const;
    void onbufferedchange(const jsbind::Any& value);
};

