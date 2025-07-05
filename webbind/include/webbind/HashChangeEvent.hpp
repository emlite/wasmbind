#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class HashChangeEvent : public Event {
    explicit HashChangeEvent(Handle h) noexcept;

public:
    explicit HashChangeEvent(const emlite::Val &val) noexcept;
    static HashChangeEvent take_ownership(Handle h) noexcept;

    HashChangeEvent clone() const noexcept;
    HashChangeEvent(const jsbind::DOMString& type);
    HashChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::USVString oldURL() const;
    jsbind::USVString newURL() const;
};

