#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class CreateMonitor : public EventTarget {
    explicit CreateMonitor(Handle h) noexcept;

public:
    explicit CreateMonitor(const emlite::Val &val) noexcept;
    static CreateMonitor take_ownership(Handle h) noexcept;

    CreateMonitor clone() const noexcept;
    jsbind::Any ondownloadprogress() const;
    void ondownloadprogress(const jsbind::Any& value);
};

