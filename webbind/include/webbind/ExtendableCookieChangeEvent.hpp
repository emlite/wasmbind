#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "CookieStore.hpp"
#include "enums.hpp"


/// The ExtendableCookieChangeEvent class.
/// [`ExtendableCookieChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent)
class ExtendableCookieChangeEvent : public ExtendableEvent {
    explicit ExtendableCookieChangeEvent(Handle h) noexcept;

public:
    explicit ExtendableCookieChangeEvent(const emlite::Val &val) noexcept;
    static ExtendableCookieChangeEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] ExtendableCookieChangeEvent clone() const noexcept;
    /// The `new ExtendableCookieChangeEvent(..)` constructor, creating a new ExtendableCookieChangeEvent instance
    ExtendableCookieChangeEvent(const jsbind::String& type);
    /// The `new ExtendableCookieChangeEvent(..)` constructor, creating a new ExtendableCookieChangeEvent instance
    ExtendableCookieChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `changed` attribute.
    /// [`ExtendableCookieChangeEvent.changed`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent/changed)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> changed() const;
    /// Getter of the `deleted` attribute.
    /// [`ExtendableCookieChangeEvent.deleted`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent/deleted)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> deleted() const;
};

