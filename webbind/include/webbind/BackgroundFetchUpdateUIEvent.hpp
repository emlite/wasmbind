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
    BackgroundFetchUIOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> icons() const;
    void icons(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::String title() const;
    void title(const jsbind::String& value);
};

class BackgroundFetchUpdateUIEvent : public BackgroundFetchEvent {
    explicit BackgroundFetchUpdateUIEvent(Handle h) noexcept;

public:
    explicit BackgroundFetchUpdateUIEvent(const emlite::Val &val) noexcept;
    static BackgroundFetchUpdateUIEvent take_ownership(Handle h) noexcept;

    BackgroundFetchUpdateUIEvent clone() const noexcept;
    BackgroundFetchUpdateUIEvent(const jsbind::String& type, const jsbind::Any& init);
    jsbind::Promise<jsbind::Undefined> updateUI();
    jsbind::Promise<jsbind::Undefined> updateUI(const BackgroundFetchUIOptions& options);
};

