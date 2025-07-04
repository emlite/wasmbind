#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class Blob;


class BlobEvent : public Event {
    explicit BlobEvent(Handle h) noexcept;

public:
    explicit BlobEvent(const emlite::Val &val) noexcept;
    static BlobEvent take_ownership(Handle h) noexcept;

    BlobEvent clone() const noexcept;
    BlobEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Blob data() const;
    jsbind::Any timecode() const;
};

