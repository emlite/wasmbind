#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class NavigationHistoryEntry;
class NavigationUpdateCurrentEntryOptions;
class NavigationTransition;
class NavigationActivation;
class NavigationResult;
class NavigationNavigateOptions;
class NavigationReloadOptions;
class NavigationOptions;


class NavigationUpdateCurrentEntryOptions : public emlite::Val {
  explicit NavigationUpdateCurrentEntryOptions(Handle h) noexcept;
public:
    static NavigationUpdateCurrentEntryOptions take_ownership(Handle h) noexcept;
    explicit NavigationUpdateCurrentEntryOptions(const emlite::Val &val) noexcept;
    NavigationUpdateCurrentEntryOptions() noexcept;
    [[nodiscard]] NavigationUpdateCurrentEntryOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
};

class NavigationResult : public emlite::Val {
  explicit NavigationResult(Handle h) noexcept;
public:
    static NavigationResult take_ownership(Handle h) noexcept;
    explicit NavigationResult(const emlite::Val &val) noexcept;
    NavigationResult() noexcept;
    [[nodiscard]] NavigationResult clone() const noexcept;
    [[nodiscard]] jsbind::Promise<NavigationHistoryEntry> committed() const;
    void committed(const jsbind::Promise<NavigationHistoryEntry>& value);
    [[nodiscard]] jsbind::Promise<NavigationHistoryEntry> finished() const;
    void finished(const jsbind::Promise<NavigationHistoryEntry>& value);
};

class NavigationNavigateOptions : public emlite::Val {
  explicit NavigationNavigateOptions(Handle h) noexcept;
public:
    static NavigationNavigateOptions take_ownership(Handle h) noexcept;
    explicit NavigationNavigateOptions(const emlite::Val &val) noexcept;
    NavigationNavigateOptions() noexcept;
    [[nodiscard]] NavigationNavigateOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
    [[nodiscard]] NavigationHistoryBehavior history() const;
    void history(const NavigationHistoryBehavior& value);
};

class NavigationReloadOptions : public emlite::Val {
  explicit NavigationReloadOptions(Handle h) noexcept;
public:
    static NavigationReloadOptions take_ownership(Handle h) noexcept;
    explicit NavigationReloadOptions(const emlite::Val &val) noexcept;
    NavigationReloadOptions() noexcept;
    [[nodiscard]] NavigationReloadOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any state() const;
    void state(const jsbind::Any& value);
};

class NavigationOptions : public emlite::Val {
  explicit NavigationOptions(Handle h) noexcept;
public:
    static NavigationOptions take_ownership(Handle h) noexcept;
    explicit NavigationOptions(const emlite::Val &val) noexcept;
    NavigationOptions() noexcept;
    [[nodiscard]] NavigationOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any info() const;
    void info(const jsbind::Any& value);
};

/// The Navigation class.
/// [`Navigation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation)
class Navigation : public EventTarget {
    explicit Navigation(Handle h) noexcept;

public:
    explicit Navigation(const emlite::Val &val) noexcept;
    static Navigation take_ownership(Handle h) noexcept;

    [[nodiscard]] Navigation clone() const noexcept;
    /// The entries method.
    /// [`Navigation.entries`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/entries)
    jsbind::TypedArray<NavigationHistoryEntry> entries();
    /// Getter of the `currentEntry` attribute.
    /// [`Navigation.currentEntry`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/currentEntry)
    [[nodiscard]] NavigationHistoryEntry currentEntry() const;
    /// The updateCurrentEntry method.
    /// [`Navigation.updateCurrentEntry`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/updateCurrentEntry)
    jsbind::Undefined updateCurrentEntry(const NavigationUpdateCurrentEntryOptions& options);
    /// Getter of the `transition` attribute.
    /// [`Navigation.transition`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/transition)
    [[nodiscard]] NavigationTransition transition() const;
    /// Getter of the `activation` attribute.
    /// [`Navigation.activation`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/activation)
    [[nodiscard]] NavigationActivation activation() const;
    /// Getter of the `canGoBack` attribute.
    /// [`Navigation.canGoBack`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/canGoBack)
    [[nodiscard]] bool canGoBack() const;
    /// Getter of the `canGoForward` attribute.
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
    /// Getter of the `onnavigate` attribute.
    /// [`Navigation.onnavigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigate)
    [[nodiscard]] jsbind::Any onnavigate() const;
    /// Setter of the `onnavigate` attribute.
    /// [`Navigation.onnavigate`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigate)
    void onnavigate(const jsbind::Any& value);
    /// Getter of the `onnavigatesuccess` attribute.
    /// [`Navigation.onnavigatesuccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigatesuccess)
    [[nodiscard]] jsbind::Any onnavigatesuccess() const;
    /// Setter of the `onnavigatesuccess` attribute.
    /// [`Navigation.onnavigatesuccess`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigatesuccess)
    void onnavigatesuccess(const jsbind::Any& value);
    /// Getter of the `onnavigateerror` attribute.
    /// [`Navigation.onnavigateerror`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigateerror)
    [[nodiscard]] jsbind::Any onnavigateerror() const;
    /// Setter of the `onnavigateerror` attribute.
    /// [`Navigation.onnavigateerror`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/onnavigateerror)
    void onnavigateerror(const jsbind::Any& value);
    /// Getter of the `oncurrententrychange` attribute.
    /// [`Navigation.oncurrententrychange`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/oncurrententrychange)
    [[nodiscard]] jsbind::Any oncurrententrychange() const;
    /// Setter of the `oncurrententrychange` attribute.
    /// [`Navigation.oncurrententrychange`](https://developer.mozilla.org/en-US/docs/Web/API/Navigation/oncurrententrychange)
    void oncurrententrychange(const jsbind::Any& value);
};

