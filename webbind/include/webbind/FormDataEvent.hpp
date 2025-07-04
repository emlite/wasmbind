#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class FormData;


class FormDataEvent : public Event {
    explicit FormDataEvent(Handle h) noexcept;

public:
    explicit FormDataEvent(const emlite::Val &val) noexcept;
    static FormDataEvent take_ownership(Handle h) noexcept;

    FormDataEvent clone() const noexcept;
    FormDataEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    FormData formData() const;
};

