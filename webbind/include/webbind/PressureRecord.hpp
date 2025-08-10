#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface PressureRecord
/// [`PressureRecord`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord)
class PressureRecord : public emlite::Val {
    explicit PressureRecord(Handle h) noexcept;
public:
    explicit PressureRecord(const emlite::Val &val) noexcept;
    static PressureRecord take_ownership(Handle h) noexcept;
    [[nodiscard]] PressureRecord clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PressureRecord.source`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/source)
    /// [`PressureRecord.source`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/source)
    [[nodiscard]] PressureSource source() const;
    /// [`PressureRecord.state`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/state)
    /// [`PressureRecord.state`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/state)
    [[nodiscard]] PressureState state() const;
    /// [`PressureRecord.time`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/time)
    /// [`PressureRecord.time`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/time)
    [[nodiscard]] jsbind::Any time() const;
    /// The toJSON method.
    /// [`PressureRecord.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PressureRecord/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind