#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"

namespace webbind {

class ContentIndexEventInit;

/// Interface ContentIndexEvent
/// [`ContentIndexEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEvent)
class ContentIndexEvent : public ExtendableEvent {
    explicit ContentIndexEvent(Handle h) noexcept;
public:
    explicit ContentIndexEvent(const emlite::Val &val) noexcept;
    static ContentIndexEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] ContentIndexEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ContentIndexEvent(..)` constructor, creating a new ContentIndexEvent instance
    ContentIndexEvent(const jsbind::String& type, const ContentIndexEventInit& init);
    /// [`ContentIndexEvent.id`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEvent/id)
    /// [`ContentIndexEvent.id`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEvent/id)
    [[nodiscard]] jsbind::String id() const;
};

} // namespace webbind