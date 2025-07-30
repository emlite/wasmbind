#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


class ContentIndexEvent : public ExtendableEvent {
    explicit ContentIndexEvent(Handle h) noexcept;

public:
    explicit ContentIndexEvent(const emlite::Val &val) noexcept;
    static ContentIndexEvent take_ownership(Handle h) noexcept;

    ContentIndexEvent clone() const noexcept;
    ContentIndexEvent(const jsbind::String& type, const jsbind::Any& init);
    jsbind::String id() const;
};

