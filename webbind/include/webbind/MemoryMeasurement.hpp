#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MemoryBreakdownEntry.hpp"

namespace webbind {

/// Dictionary type MemoryMeasurement
class MemoryMeasurement : public emlite::Val {
  explicit MemoryMeasurement(Handle h) noexcept;
public:
    static MemoryMeasurement take_ownership(Handle h) noexcept;
    explicit MemoryMeasurement(const emlite::Val &val) noexcept;
    MemoryMeasurement() noexcept;
    [[nodiscard]] MemoryMeasurement clone() const noexcept;
    /// Getter of the `bytes` attribute.
    [[nodiscard]] long long bytes() const;
    /// Setter of the `bytes` attribute.
    void bytes(long long value);
    /// Getter of the `breakdown` attribute.
    [[nodiscard]] jsbind::TypedArray<MemoryBreakdownEntry> breakdown() const;
    /// Setter of the `breakdown` attribute.
    void breakdown(const jsbind::TypedArray<MemoryBreakdownEntry>& value);
};

} // namespace webbind