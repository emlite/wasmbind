#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "SubmitEventInit.hpp"

namespace webbind {

class HTMLElement;

/// Interface SubmitEvent
/// [`SubmitEvent`](https://developer.mozilla.org/en-US/docs/Web/API/SubmitEvent)
class SubmitEvent : public Event {
    explicit SubmitEvent(Handle h) noexcept;
public:
    explicit SubmitEvent(const emlite::Val &val) noexcept;
    static SubmitEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] SubmitEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new SubmitEvent(..)` constructor, creating a new SubmitEvent instance
    SubmitEvent(const jsbind::String& type);
    /// The `new SubmitEvent(..)` constructor, creating a new SubmitEvent instance
    SubmitEvent(const jsbind::String& type, const SubmitEventInit& eventInitDict);
    /// Getter of the `submitter` attribute.
    /// [`SubmitEvent.submitter`](https://developer.mozilla.org/en-US/docs/Web/API/SubmitEvent/submitter)
    [[nodiscard]] HTMLElement submitter() const;
};

} // namespace webbind