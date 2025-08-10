#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class EventInit;
class PromptResponseObject;

/// Interface BeforeInstallPromptEvent
/// [`BeforeInstallPromptEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeInstallPromptEvent)
class BeforeInstallPromptEvent : public Event {
    explicit BeforeInstallPromptEvent(Handle h) noexcept;
public:
    explicit BeforeInstallPromptEvent(const emlite::Val &val) noexcept;
    static BeforeInstallPromptEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] BeforeInstallPromptEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BeforeInstallPromptEvent(..)` constructor, creating a new BeforeInstallPromptEvent instance
    BeforeInstallPromptEvent(const jsbind::String& type);
    /// The `new BeforeInstallPromptEvent(..)` constructor, creating a new BeforeInstallPromptEvent instance
    BeforeInstallPromptEvent(const jsbind::String& type, const EventInit& eventInitDict);
    /// The prompt method.
    /// [`BeforeInstallPromptEvent.prompt`](https://developer.mozilla.org/en-US/docs/Web/API/BeforeInstallPromptEvent/prompt)
    jsbind::Promise<PromptResponseObject> prompt();
};

} // namespace webbind