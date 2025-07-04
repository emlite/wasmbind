#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BackgroundSyncOptions;


class BackgroundSyncOptions : public emlite::Val {
  explicit BackgroundSyncOptions(Handle h) noexcept;
public:
    static BackgroundSyncOptions take_ownership(Handle h) noexcept;
    explicit BackgroundSyncOptions(const emlite::Val &val) noexcept;
    BackgroundSyncOptions() noexcept;
    BackgroundSyncOptions clone() const noexcept;
    long long minInterval() const;
    void minInterval(long long value);
};

class PeriodicSyncManager : public emlite::Val {
    explicit PeriodicSyncManager(Handle h) noexcept;

public:
    explicit PeriodicSyncManager(const emlite::Val &val) noexcept;
    static PeriodicSyncManager take_ownership(Handle h) noexcept;

    PeriodicSyncManager clone() const noexcept;
    jsbind::Promise register_(const jsbind::DOMString& tag, const BackgroundSyncOptions& options);
    jsbind::Promise getTags();
    jsbind::Promise unregister(const jsbind::DOMString& tag);
};

