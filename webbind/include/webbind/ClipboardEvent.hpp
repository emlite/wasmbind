#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class DataTransfer;


class ClipboardEvent : public Event {
    explicit ClipboardEvent(Handle h) noexcept;

public:
    explicit ClipboardEvent(const emlite::Val &val) noexcept;
    static ClipboardEvent take_ownership(Handle h) noexcept;

    ClipboardEvent clone() const noexcept;
    ClipboardEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    DataTransfer clipboardData() const;
};

