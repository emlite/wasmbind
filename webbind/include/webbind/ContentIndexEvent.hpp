#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


/// The ContentIndexEvent class.
/// [`ContentIndexEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEvent)
class ContentIndexEvent : public ExtendableEvent {
    explicit ContentIndexEvent(Handle h) noexcept;

public:
    explicit ContentIndexEvent(const emlite::Val &val) noexcept;
    static ContentIndexEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ContentIndexEvent clone() const noexcept;
    /// The `new ContentIndexEvent(..)` constructor, creating a new ContentIndexEvent instance
    ContentIndexEvent(const jsbind::String& type, const jsbind::Any& init);
    /// Getter of the `id` attribute.
    /// [`ContentIndexEvent.id`](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndexEvent/id)
    [[nodiscard]] jsbind::String id() const;
};

