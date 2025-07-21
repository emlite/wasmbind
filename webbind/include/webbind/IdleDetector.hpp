#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class IdleOptions;
class AbortSignal;


class IdleOptions : public emlite::Val {
  explicit IdleOptions(Handle h) noexcept;
public:
    static IdleOptions take_ownership(Handle h) noexcept;
    explicit IdleOptions(const emlite::Val &val) noexcept;
    IdleOptions() noexcept;
    IdleOptions clone() const noexcept;
    long long threshold() const;
    void threshold(long long value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class IdleDetector : public EventTarget {
    explicit IdleDetector(Handle h) noexcept;

public:
    explicit IdleDetector(const emlite::Val &val) noexcept;
    static IdleDetector take_ownership(Handle h) noexcept;

    IdleDetector clone() const noexcept;
    IdleDetector();
    UserIdleState userState() const;
    ScreenIdleState screenState() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
    static jsbind::Promise<PermissionState> requestPermission();
    jsbind::Promise<jsbind::Undefined> start();
    jsbind::Promise<jsbind::Undefined> start(const IdleOptions& options);
};

