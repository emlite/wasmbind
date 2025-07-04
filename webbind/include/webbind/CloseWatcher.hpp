#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class CloseWatcher : public EventTarget {
    explicit CloseWatcher(Handle h) noexcept;

public:
    explicit CloseWatcher(const emlite::Val &val) noexcept;
    static CloseWatcher take_ownership(Handle h) noexcept;

    CloseWatcher clone() const noexcept;
    CloseWatcher(const jsbind::Any& options);
    jsbind::Undefined requestClose();
    jsbind::Undefined close();
    jsbind::Undefined destroy();
    jsbind::Any oncancel() const;
    void oncancel(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
};

