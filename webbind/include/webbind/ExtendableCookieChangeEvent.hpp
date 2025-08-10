#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ExtendableEvent.hpp"
#include "ExtendableCookieChangeEventInit.hpp"
#include "CookieListItem.hpp"

namespace webbind {

/// Interface ExtendableCookieChangeEvent
/// [`ExtendableCookieChangeEvent`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent)
class ExtendableCookieChangeEvent : public ExtendableEvent {
    explicit ExtendableCookieChangeEvent(Handle h) noexcept;
public:
    explicit ExtendableCookieChangeEvent(const emlite::Val &val) noexcept;
    static ExtendableCookieChangeEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] ExtendableCookieChangeEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new ExtendableCookieChangeEvent(..)` constructor, creating a new ExtendableCookieChangeEvent instance
    ExtendableCookieChangeEvent(const jsbind::String& type);
    /// The `new ExtendableCookieChangeEvent(..)` constructor, creating a new ExtendableCookieChangeEvent instance
    ExtendableCookieChangeEvent(const jsbind::String& type, const ExtendableCookieChangeEventInit& eventInitDict);
    /// [`ExtendableCookieChangeEvent.changed`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent/changed)
    /// [`ExtendableCookieChangeEvent.changed`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent/changed)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> changed() const;
    /// [`ExtendableCookieChangeEvent.deleted`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent/deleted)
    /// [`ExtendableCookieChangeEvent.deleted`](https://developer.mozilla.org/en-US/docs/Web/API/ExtendableCookieChangeEvent/deleted)
    [[nodiscard]] jsbind::TypedArray<CookieListItem> deleted() const;
};

} // namespace webbind