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
    PromptResponseObject clone() const noexcept;
    AppBannerPromptOutcome userChoice() const;
    void userChoice(const AppBannerPromptOutcome& value);
};

class BeforeInstallPromptEvent : public Event {
    explicit BeforeInstallPromptEvent(Handle h) noexcept;

public:
    explicit BeforeInstallPromptEvent(const emlite::Val &val) noexcept;
    static BeforeInstallPromptEvent take_ownership(Handle h) noexcept;

    BeforeInstallPromptEvent clone() const noexcept;
    BeforeInstallPromptEvent(const jsbind::DOMString& type);
    BeforeInstallPromptEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Promise<PromptResponseObject> prompt();
};

