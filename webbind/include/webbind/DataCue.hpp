#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "TextTrackCue.hpp"
#include "enums.hpp"


class DataCue : public TextTrackCue {
    explicit DataCue(Handle h) noexcept;

public:
    explicit DataCue(const emlite::Val &val) noexcept;
    static DataCue take_ownership(Handle h) noexcept;

    DataCue clone() const noexcept;
    DataCue(double startTime, double endTime, const jsbind::Any& value);
    DataCue(double startTime, double endTime, const jsbind::Any& value, const jsbind::DOMString& type);
    jsbind::Any value() const;
    void value(const jsbind::Any& value);
    jsbind::DOMString type() const;
};

