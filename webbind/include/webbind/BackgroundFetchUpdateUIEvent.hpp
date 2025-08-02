#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "BackgroundFetchEvent.hpp"
#include "enums.hpp"

class BackgroundFetchUIOptions;


class BackgroundFetchUIOptions : public emlite::Val {
  explicit BackgroundFetchUIOptions(Handle h) noexcept;
public:
    static BackgroundFetchUIOptions take_ownership(Handle h) noexcept;
    explicit BackgroundFetchUIOptions(const emlite::Val &val) noexcept;
    BackgroundFetchUIOptions() noexcept;
    [[nodiscard]] BackgroundFetchUIOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> icons() const;
    void icons(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String title() const;
    void title(const jsbind::String& value);
};

/// The BackgroundFetchUpdateUIEvent class.
/// [`BackgroundFetchUpdateUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent)
class BackgroundFetchUpdateUIEvent : public BackgroundFetchEvent {
    explicit BackgroundFetchUpdateUIEvent(Handle h) noexcept;

public:
    explicit BackgroundFetchUpdateUIEvent(const emlite::Val &val) noexcept;
    static BackgroundFetchUpdateUIEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] BackgroundFetchUpdateUIEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BackgroundFetchUpdateUIEvent(..)` constructor, creating a new BackgroundFetchUpdateUIEvent instance
    BackgroundFetchUpdateUIEvent(const jsbind::String& type, const jsbind::Any& init);
    /// The updateUI method.
    /// [`BackgroundFetchUpdateUIEvent.updateUI`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent/updateUI)
    jsbind::Promise<jsbind::Undefined> updateUI();
    /// The updateUI method.
    /// [`BackgroundFetchUpdateUIEvent.updateUI`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent/updateUI)
    jsbind::Promise<jsbind::Undefined> updateUI(const BackgroundFetchUIOptions& options);
};

