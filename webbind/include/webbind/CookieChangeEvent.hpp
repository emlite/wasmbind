#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "CookieStore.hpp"
#include "enums.hpp"


/// The CookieChangeEvent class.
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
    CookieChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `changed` attribute.
    /// [`CookieChangeEvent.changed`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent/changed)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> changed() const;
    /// Getter of the `deleted` attribute.
    /// [`CookieChangeEvent.deleted`](https://developer.mozilla.org/en-US/docs/Web/API/CookieChangeEvent/deleted)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> deleted() const;
};

