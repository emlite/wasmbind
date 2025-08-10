#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class CookieChangeEventInit;
class CookieListItem;

/// Interface CookieChangeEvent
/// [`CookieChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent)
class CookieChangeEvent : public Event {
    explicit CookieChangeEvent(Handle h) noexcept;
public:
    explicit CookieChangeEvent(const emlite::Val &val) noexcept;
    static CookieChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] CookieChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CookieChangeEvent(..)` constructor, creating a new CookieChangeEvent instance
    CookieChangeEvent(const jsbind::String& type);
    /// The `new CookieChangeEvent(..)` constructor, creating a new CookieChangeEvent instance
    CookieChangeEvent(const jsbind::String& type, const CookieChangeEventInit& eventInitDict);
    /// [`CookieChangeEvent.changed`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent/changed)
    /// [`CookieChangeEvent.changed`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent/changed)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> changed() const;
    /// [`CookieChangeEvent.deleted`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent/deleted)
    /// [`CookieChangeEvent.deleted`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent/deleted)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> deleted() const;
};

} // namespace webbind