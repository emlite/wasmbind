#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MemoryBreakdownEntry.hpp"

namespace webbind {

/// Dictionary type MemoryMeasurement
/// [`MemoryMeasurement`](https://developer.mozilla.org/en-US/docs/Web/API/MemoryMeasurement)
class MemoryMeasurement : public emlite::Val {
  explicit MemoryMeasurement(Handle h) noexcept;
public:
    static MemoryMeasurement take_ownership(Handle h) noexcept;
    explicit MemoryMeasurement(const emlite::Val &val) noexcept;
    MemoryMeasurement() noexcept;
    [[nodiscard]] MemoryMeasurement clone() const noexcept;
    [[nodiscard]] long long bytes() const;
    void bytes(long long value);
    [[nodiscard]] jsbind::TypedArray<MemoryBreakdownEntry> breakdown() const;
    void breakdown(const jsbind::TypedArray<MemoryBreakdownEntry>& value);
};

} // namespace webbind