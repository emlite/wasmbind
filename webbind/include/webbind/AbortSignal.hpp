#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class AbortSignal;


class AbortSignal : public EventTarget {
    explicit AbortSignal(Handle h) noexcept;

public:
    explicit AbortSignal(const emlite::Val &val) noexcept;
    static AbortSignal take_ownership(Handle h) noexcept;

    AbortSignal clone() const noexcept;
    static AbortSignal abort();
    static AbortSignal abort(const jsbind::Any& reason);
    static AbortSignal timeout(long long milliseconds);
    static AbortSignal any(const jsbind::Sequence<AbortSignal>& signals);
    bool aborted() const;
    jsbind::Any reason() const;
    jsbind::Undefined throwIfAborted();
    jsbind::Any onabort() const;
    void onabort(const jsbind::Any& value);
};

