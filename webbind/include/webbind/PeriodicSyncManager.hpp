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
    [[nodiscard]] BackgroundSyncOptions clone() const noexcept;
    [[nodiscard]] long long minInterval() const;
    void minInterval(long long value);
};

/// The PeriodicSyncManager class.
/// [`PeriodicSyncManager`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncManager)
class PeriodicSyncManager : public emlite::Val {
    explicit PeriodicSyncManager(Handle h) noexcept;

public:
    explicit PeriodicSyncManager(const emlite::Val &val) noexcept;
    static PeriodicSyncManager take_ownership(Handle h) noexcept;

    [[nodiscard]] PeriodicSyncManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The register method.
    /// [`PeriodicSyncManager.register`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncManager/register)
    jsbind::Promise<jsbind::Undefined> register_(const jsbind::String& tag);
    /// The register method.
    /// [`PeriodicSyncManager.register`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncManager/register)
    jsbind::Promise<jsbind::Undefined> register_(const jsbind::String& tag, const BackgroundSyncOptions& options);
    /// The getTags method.
    /// [`PeriodicSyncManager.getTags`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncManager/getTags)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> getTags();
    /// The unregister method.
    /// [`PeriodicSyncManager.unregister`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicSyncManager/unregister)
    jsbind::Promise<jsbind::Undefined> unregister(const jsbind::String& tag);
};

