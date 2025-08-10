#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BackgroundFetchEvent.hpp"
#include "BackgroundFetchEventInit.hpp"
#include "BackgroundFetchUIOptions.hpp"

namespace webbind {

/// Interface BackgroundFetchUpdateUIEvent
/// [`BackgroundFetchUpdateUIEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent)
class BackgroundFetchUpdateUIEvent : public BackgroundFetchEvent {
    explicit BackgroundFetchUpdateUIEvent(Handle h) noexcept;
public:
    explicit BackgroundFetchUpdateUIEvent(const emlite::Val &val) noexcept;
    static BackgroundFetchUpdateUIEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchUpdateUIEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BackgroundFetchUpdateUIEvent(..)` constructor, creating a new BackgroundFetchUpdateUIEvent instance
    BackgroundFetchUpdateUIEvent(const jsbind::String& type, const BackgroundFetchEventInit& init);
    /// The updateUI method.
    /// [`BackgroundFetchUpdateUIEvent.updateUI`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent/updateUI)
    jsbind::Promise<jsbind::Undefined> updateUI();
    /// The updateUI method.
    /// [`BackgroundFetchUpdateUIEvent.updateUI`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchUpdateUIEvent/updateUI)
    jsbind::Promise<jsbind::Undefined> updateUI(const BackgroundFetchUIOptions& options);
};

} // namespace webbind