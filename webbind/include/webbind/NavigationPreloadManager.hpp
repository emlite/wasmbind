#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class NavigationPreloadState;


class NavigationPreloadState : public emlite::Val {
  explicit NavigationPreloadState(Handle h) noexcept;
public:
    static NavigationPreloadState take_ownership(Handle h) noexcept;
    explicit NavigationPreloadState(const emlite::Val &val) noexcept;
    NavigationPreloadState() noexcept;
    [[nodiscard]] NavigationPreloadState clone() const noexcept;
    [[nodiscard]] bool enabled() const;
    void enabled(bool value);
    [[nodiscard]] jsbind::String headerValue() const;
    void headerValue(const jsbind::String& value);
};

/// The NavigationPreloadManager class.
/// [`NavigationPreloadManager`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadManager)
class NavigationPreloadManager : public emlite::Val {
    explicit NavigationPreloadManager(Handle h) noexcept;

public:
    explicit NavigationPreloadManager(const emlite::Val &val) noexcept;
    static NavigationPreloadManager take_ownership(Handle h) noexcept;

    [[nodiscard]] NavigationPreloadManager clone() const noexcept;
    /// The enable method.
    /// [`NavigationPreloadManager.enable`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadManager/enable)
    jsbind::Promise<jsbind::Undefined> enable();
    /// The disable method.
    /// [`NavigationPreloadManager.disable`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadManager/disable)
    jsbind::Promise<jsbind::Undefined> disable();
    /// The setHeaderValue method.
    /// [`NavigationPreloadManager.setHeaderValue`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadManager/setHeaderValue)
    jsbind::Promise<jsbind::Undefined> setHeaderValue(const jsbind::String& value);
    /// The getState method.
    /// [`NavigationPreloadManager.getState`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationPreloadManager/getState)
    jsbind::Promise<NavigationPreloadState> getState();
};

