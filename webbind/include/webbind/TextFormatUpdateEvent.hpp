#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class TextFormat;


class TextFormatUpdateEvent : public Event {
    explicit TextFormatUpdateEvent(Handle h) noexcept;

public:
    explicit TextFormatUpdateEvent(const emlite::Val &val) noexcept;
    static TextFormatUpdateEvent take_ownership(Handle h) noexcept;

    TextFormatUpdateEvent clone() const noexcept;
    TextFormatUpdateEvent(const jsbind::DOMString& type, const jsbind::Any& options);
    jsbind::Sequence<TextFormat> getTextFormats();
};

