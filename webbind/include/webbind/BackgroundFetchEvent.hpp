#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class BackgroundFetchRegistration;


/// The BackgroundFetchEvent class.
/// [`BackgroundFetchEvent`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchEvent)
class BackgroundFetchEvent : public ExtendableEvent {
    explicit BackgroundFetchEvent(Handle h) noexcept;

public:
    explicit BackgroundFetchEvent(const emlite::Val &val) noexcept;
    static BackgroundFetchEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] BackgroundFetchEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new BackgroundFetchEvent(..)` constructor, creating a new BackgroundFetchEvent instance
    BackgroundFetchEvent(const jsbind::String& type, const jsbind::Any& init);
    /// Getter of the `registration` attribute.
    /// [`BackgroundFetchEvent.registration`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchEvent/registration)
    [[nodiscard]] BackgroundFetchRegistration registration() const;
};

