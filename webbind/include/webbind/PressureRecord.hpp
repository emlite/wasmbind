#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The PressureRecord class.
/// [`PressureRecord`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord)
class PressureRecord : public emlite::Val {
    explicit PressureRecord(Handle h) noexcept;

public:
    explicit PressureRecord(const emlite::Val &val) noexcept;
    static PressureRecord take_ownership(Handle h) noexcept;

    [[nodiscard]] PressureRecord clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `source` attribute.
    /// [`PressureRecord.source`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/source)
    [[nodiscard]] PressureSource source() const;
    /// Getter of the `state` attribute.
    /// [`PressureRecord.state`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/state)
    [[nodiscard]] PressureState state() const;
    /// Getter of the `time` attribute.
    /// [`PressureRecord.time`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/time)
    [[nodiscard]] jsbind::Any time() const;
    /// The toJSON method.
    /// [`PressureRecord.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/toJSON)
    jsbind::Object toJSON();
};

