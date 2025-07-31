#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BackgroundFetchRegistration;
class BackgroundFetchOptions;


class BackgroundFetchOptions : public emlite::Val {
  explicit BackgroundFetchOptions(Handle h) noexcept;
public:
    static BackgroundFetchOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchOptions(const emlite::Val &val) noexcept;
    BackgroundFetchOptions() noexcept;
    [[nodiscard]] BackgroundFetchOptions clone() const noexcept;
    [[nodiscard]] long long downloadTotal() const;
    void downloadTotal(long long value);
};

/// The BackgroundFetchManager class.
/// [`BackgroundFetchManager`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager)
class BackgroundFetchManager : public emlite::Val {
    explicit BackgroundFetchManager(Handle h) noexcept;

public:
    explicit BackgroundFetchManager(const emlite::Val &val) noexcept;
    static BackgroundFetchManager take_ownership(Handle h) noexcept;

    [[nodiscard]] BackgroundFetchManager clone() const noexcept;
    /// The fetch method.
    /// [`BackgroundFetchManager.fetch`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/fetch)
    jsbind::Promise<BackgroundFetchRegistration> fetch(const jsbind::String& id, const jsbind::Any& requests);
    /// The fetch method.
    /// [`BackgroundFetchManager.fetch`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/fetch)
    jsbind::Promise<BackgroundFetchRegistration> fetch(const jsbind::String& id, const jsbind::Any& requests, const BackgroundFetchOptions& options);
    /// The get method.
    /// [`BackgroundFetchManager.get`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/get)
    jsbind::Promise<BackgroundFetchRegistration> get(const jsbind::String& id);
    /// The getIds method.
    /// [`BackgroundFetchManager.getIds`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchManager/getIds)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> getIds();
};

