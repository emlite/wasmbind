#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


/// The HashChangeEvent class.
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
    HashChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `oldURL` attribute.
    /// [`HashChangeEvent.oldURL`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent/oldURL)
    [[nodiscard]] jsbind::String oldURL() const;
    /// Getter of the `newURL` attribute.
    /// [`HashChangeEvent.newURL`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEvent/newURL)
    [[nodiscard]] jsbind::String newURL() const;
};

