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
    NavigationUpdateCurrentEntryOptions clone() const noexcept;
    jsbind::Any state() const;
    void state(const jsbind::Any& value);
};

class NavigationResult : public emlite::Val {
  explicit NavigationResult(Handle h) noexcept;
public:
    static NavigationResult take_ownership(Handle h) noexcept;
    explicit NavigationResult(const emlite::Val &val) noexcept;
    NavigationResult() noexcept;
    NavigationResult clone() const noexcept;
    jsbind::Promise committed() const;
    void committed(const jsbind::Promise& value);
    jsbind::Promise finished() const;
    void finished(const jsbind::Promise& value);
};

class NavigationNavigateOptions : public emlite::Val {
  explicit NavigationNavigateOptions(Handle h) noexcept;
public:
    static NavigationNavigateOptions take_ownership(Handle h) noexcept;
    explicit NavigationNavigateOptions(const emlite::Val &val) noexcept;
    NavigationNavigateOptions() noexcept;
    NavigationNavigateOptions clone() const noexcept;
    jsbind::Any state() const;
    void state(const jsbind::Any& value);
    NavigationHistoryBehavior history() const;
    void history(const NavigationHistoryBehavior& value);
};

class NavigationReloadOptions : public emlite::Val {
  explicit NavigationReloadOptions(Handle h) noexcept;
public:
    static NavigationReloadOptions take_ownership(Handle h) noexcept;
    explicit NavigationReloadOptions(const emlite::Val &val) noexcept;
    NavigationReloadOptions() noexcept;
    NavigationReloadOptions clone() const noexcept;
    jsbind::Any state() const;
    void state(const jsbind::Any& value);
};

class NavigationOptions : public emlite::Val {
  explicit NavigationOptions(Handle h) noexcept;
public:
    static NavigationOptions take_ownership(Handle h) noexcept;
    explicit NavigationOptions(const emlite::Val &val) noexcept;
    NavigationOptions() noexcept;
    NavigationOptions clone() const noexcept;
    jsbind::Any info() const;
    void info(const jsbind::Any& value);
};

class Navigation : public EventTarget {
    explicit Navigation(Handle h) noexcept;

public:
    explicit Navigation(const emlite::Val &val) noexcept;
    static Navigation take_ownership(Handle h) noexcept;

    Navigation clone() const noexcept;
    jsbind::Sequence<NavigationHistoryEntry> entries();
    NavigationHistoryEntry currentEntry() const;
    jsbind::Undefined updateCurrentEntry(const NavigationUpdateCurrentEntryOptions& options);
    NavigationTransition transition() const;
    NavigationActivation activation() const;
    bool canGoBack() const;
    bool canGoForward() const;
    NavigationResult navigate(const jsbind::USVString& url);
    NavigationResult navigate(const jsbind::USVString& url, const NavigationNavigateOptions& options);
    NavigationResult reload();
    NavigationResult reload(const NavigationReloadOptions& options);
    NavigationResult traverseTo(const jsbind::DOMString& key);
    NavigationResult traverseTo(const jsbind::DOMString& key, const NavigationOptions& options);
    NavigationResult back();
    NavigationResult back(const NavigationOptions& options);
    NavigationResult forward();
    NavigationResult forward(const NavigationOptions& options);
    jsbind::Any onnavigate() const;
    void onnavigate(const jsbind::Any& value);
    jsbind::Any onnavigatesuccess() const;
    void onnavigatesuccess(const jsbind::Any& value);
    jsbind::Any onnavigateerror() const;
    void onnavigateerror(const jsbind::Any& value);
    jsbind::Any oncurrententrychange() const;
    void oncurrententrychange(const jsbind::Any& value);
};

