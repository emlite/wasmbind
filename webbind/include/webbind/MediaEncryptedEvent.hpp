#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class MediaEncryptedEvent : public Event {
    explicit MediaEncryptedEvent(Handle h) noexcept;

public:
    explicit MediaEncryptedEvent(const emlite::Val &val) noexcept;
    static MediaEncryptedEvent take_ownership(Handle h) noexcept;

    MediaEncryptedEvent clone() const noexcept;
    MediaEncryptedEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::DOMString initDataType() const;
    jsbind::ArrayBuffer initData() const;
};

