#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class SourceBuffer;


class SourceBufferList : public EventTarget {
    explicit SourceBufferList(Handle h) noexcept;

public:
    explicit SourceBufferList(const emlite::Val &val) noexcept;
    static SourceBufferList take_ownership(Handle h) noexcept;

    SourceBufferList clone() const noexcept;
    unsigned long length() const;
    jsbind::Any onaddsourcebuffer() const;
    void onaddsourcebuffer(const jsbind::Any& value);
    jsbind::Any onremovesourcebuffer() const;
    void onremovesourcebuffer(const jsbind::Any& value);
};

