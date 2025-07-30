#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class BackgroundFetchRegistration;


class BackgroundFetchEvent : public ExtendableEvent {
    explicit BackgroundFetchEvent(Handle h) noexcept;

public:
    explicit BackgroundFetchEvent(const emlite::Val &val) noexcept;
    static BackgroundFetchEvent take_ownership(Handle h) noexcept;

    BackgroundFetchEvent clone() const noexcept;
    BackgroundFetchEvent(const jsbind::String& type, const jsbind::Any& init);
    BackgroundFetchRegistration registration() const;
};

