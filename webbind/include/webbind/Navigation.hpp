#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "NavigationUpdateCurrentEntryOptions.hpp"
#include "NavigationResult.hpp"
#include "NavigationNavigateOptions.hpp"
#include "NavigationReloadOptions.hpp"
#include "NavigationOptions.hpp"

namespace webbind {

class NavigationHistoryEntry;
class NavigationTransition;
class NavigationActivation;

/// Interface Navigation
/// [`Navigation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation)
class Navigation : public EventTarget {
    explicit Navigation(Handle h) noexcept;
public:
    explicit Navigation(const emlite::Val &val) noexcept;
    static Navigation take_ownership(Handle h) noexcept;
    [[nodiscard]] Navigation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The entries method.
    /// [`Navigation.entries`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/entries)
    jsbind::TypedArray<NavigationHistoryEntry> entries();
    /// [`Navigation.currentEntry`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/currentEntry)
    /// [`Navigation.currentEntry`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/currentEntry)
    [[nodiscard]] NavigationHistoryEntry currentEntry() const;
    /// The updateCurrentEntry method.
    /// [`Navigation.updateCurrentEntry`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/updateCurrentEntry)
    jsbind::Undefined updateCurrentEntry(const NavigationUpdateCurrentEntryOptions& options);
    /// [`Navigation.transition`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/transition)
    /// [`Navigation.transition`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/transition)
    [[nodiscard]] NavigationTransition transition() const;
    /// [`Navigation.activation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/activation)
    /// [`Navigation.activation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/activation)
    [[nodiscard]] NavigationActivation activation() const;
    /// [`Navigation.canGoBack`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/canGoBack)
    /// [`Navigation.canGoBack`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/canGoBack)
    [[nodiscard]] bool canGoBack() const;
    /// [`Navigation.canGoForward`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/canGoForward)
    /// [`Navigation.canGoForward`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/canGoForward)
    [[nodiscard]] bool canGoForward() const;
    /// The navigate method.
    /// [`Navigation.navigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/navigate)
    NavigationResult navigate(const jsbind::String& url);
    /// The navigate method.
    /// [`Navigation.navigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/navigate)
    NavigationResult navigate(const jsbind::String& url, const NavigationNavigateOptions& options);
    /// The reload method.
    /// [`Navigation.reload`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/reload)
    NavigationResult reload();
    /// The reload method.
    /// [`Navigation.reload`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/reload)
    NavigationResult reload(const NavigationReloadOptions& options);
    /// The traverseTo method.
    /// [`Navigation.traverseTo`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/traverseTo)
    NavigationResult traverseTo(const jsbind::String& key);
    /// The traverseTo method.
    /// [`Navigation.traverseTo`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/traverseTo)
    NavigationResult traverseTo(const jsbind::String& key, const NavigationOptions& options);
    /// The back method.
    /// [`Navigation.back`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/back)
    NavigationResult back();
    /// The back method.
    /// [`Navigation.back`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/back)
    NavigationResult back(const NavigationOptions& options);
    /// The forward method.
    /// [`Navigation.forward`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/forward)
    NavigationResult forward();
    /// The forward method.
    /// [`Navigation.forward`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/forward)
    NavigationResult forward(const NavigationOptions& options);
    /// [`Navigation.onnavigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigate)
    /// [`Navigation.onnavigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigate)
    [[nodiscard]] jsbind::Any onnavigate() const;
    /// Setter of the `onnavigate` attribute.
    /// [`Navigation.onnavigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigate)
    void onnavigate(const jsbind::Any& value);
    /// [`Navigation.onnavigatesuccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigatesuccess)
    /// [`Navigation.onnavigatesuccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigatesuccess)
    [[nodiscard]] jsbind::Any onnavigatesuccess() const;
    /// Setter of the `onnavigatesuccess` attribute.
    /// [`Navigation.onnavigatesuccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigatesuccess)
    void onnavigatesuccess(const jsbind::Any& value);
    /// [`Navigation.onnavigateerror`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigateerror)
    /// [`Navigation.onnavigateerror`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigateerror)
    [[nodiscard]] jsbind::Any onnavigateerror() const;
    /// Setter of the `onnavigateerror` attribute.
    /// [`Navigation.onnavigateerror`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigateerror)
    void onnavigateerror(const jsbind::Any& value);
    /// [`Navigation.oncurrententrychange`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/oncurrententrychange)
    /// [`Navigation.oncurrententrychange`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/oncurrententrychange)
    [[nodiscard]] jsbind::Any oncurrententrychange() const;
    /// Setter of the `oncurrententrychange` attribute.
    /// [`Navigation.oncurrententrychange`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/oncurrententrychange)
    void oncurrententrychange(const jsbind::Any& value);
};

} // namespace webbind