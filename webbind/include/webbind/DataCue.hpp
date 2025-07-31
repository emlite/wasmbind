#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "TextTrackCue.hpp"
#include "enums.hpp"


/// The DataCue class.
/// [`DataCue`](https://developer.mozilla.org/en-US/docs/Web/API/DataCue)
class DataCue : public TextTrackCue {
    explicit DataCue(Handle h) noexcept;

public:
    explicit DataCue(const emlite::Val &val) noexcept;
    static DataCue take_ownership(Handle h) noexcept;

    [[nodiscard]] DataCue clone() const noexcept;
    /// The `new DataCue(..)` constructor, creating a new DataCue instance
    DataCue(double startTime, double endTime, const jsbind::Any& value);
    /// The `new DataCue(..)` constructor, creating a new DataCue instance
    DataCue(double startTime, double endTime, const jsbind::Any& value, const jsbind::String& type);
    /// Getter of the `value` attribute.
    /// [`DataCue.value`](https://developer.mozilla.org/en-US/docs/Web/API/DataCue/value)
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    /// [`DataCue.value`](https://developer.mozilla.org/en-US/docs/Web/API/DataCue/value)
    void value(const jsbind::Any& value);
    /// Getter of the `type` attribute.
    /// [`DataCue.type`](https://developer.mozilla.org/en-US/docs/Web/API/DataCue/type)
    [[nodiscard]] jsbind::String type() const;
};

