#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class PromptResponseObject;


class PromptResponseObject : public emlite::Val {
  explicit PromptResponseObject(Handle h) noexcept;
public:
    static PromptResponseObject take_ownership(Handle h) noexcept;
    explicit PromptResponseObject(const emlite::Val &val) noexcept;
    PromptResponseObject() noexcept;
    [[nodiscard]] PromptResponseObject clone() const noexcept;
    [[nodiscard]] AppBannerPromptOutcome userChoice() const;
    void userChoice(const AppBannerPromptOutcome& value);
};

/// The BeforeInstallPromptEvent class.
/// [`BeforeInstallPromptEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeInstallPromptEvent)
class BeforeInstallPromptEvent : public Event {
    explicit BeforeInstallPromptEvent(Handle h) noexcept;

public:
    explicit BeforeInstallPromptEvent(const emlite::Val &val) noexcept;
    static BeforeInstallPromptEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] BeforeInstallPromptEvent clone() const noexcept;
    /// The `new BeforeInstallPromptEvent(..)` constructor, creating a new BeforeInstallPromptEvent instance
    BeforeInstallPromptEvent(const jsbind::String& type);
    /// The `new BeforeInstallPromptEvent(..)` constructor, creating a new BeforeInstallPromptEvent instance
    BeforeInstallPromptEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// The prompt method.
    /// [`BeforeInstallPromptEvent.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeInstallPromptEvent/prompt)
    jsbind::Promise<PromptResponseObject> prompt();
};

