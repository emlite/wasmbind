#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class PushMessageData;


class PushEvent : public ExtendableEvent {
    explicit PushEvent(Handle h) noexcept;

public:
    explicit PushEvent(const emlite::Val &val) noexcept;
    static PushEvent take_ownership(Handle h) noexcept;

    PushEvent clone() const noexcept;
    PushEvent(const jsbind::DOMString& type);
    PushEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    PushMessageData data() const;
};

