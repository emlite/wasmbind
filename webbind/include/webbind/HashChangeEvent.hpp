#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "HashChangeEventInit.hpp"

namespace webbind {

/// Interface HashChangeEvent
/// [`HashChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent)
class HashChangeEvent : public Event {
    explicit HashChangeEvent(Handle h) noexcept;
public:
    explicit HashChangeEvent(const emlite::Val &val) noexcept;
    static HashChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] HashChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HashChangeEvent(..)` constructor, creating a new HashChangeEvent instance
    HashChangeEvent(const jsbind::String& type);
    /// The `new HashChangeEvent(..)` constructor, creating a new HashChangeEvent instance
    HashChangeEvent(const jsbind::String& type, const HashChangeEventInit& eventInitDict);
    /// [`HashChangeEvent.oldURL`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent/oldURL)
    /// [`HashChangeEvent.oldURL`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent/oldURL)
    [[nodiscard]] jsbind::String oldURL() const;
    /// [`HashChangeEvent.newURL`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent/newURL)
    /// [`HashChangeEvent.newURL`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent/newURL)
    [[nodiscard]] jsbind::String newURL() const;
};

} // namespace webbind