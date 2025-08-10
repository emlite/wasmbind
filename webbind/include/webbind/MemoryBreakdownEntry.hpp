#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MemoryAttribution.hpp"

namespace webbind {

/// Dictionary type MemoryBreakdownEntry
class MemoryBreakdownEntry : public emlite::Val {
  explicit MemoryBreakdownEntry(Handle h) noexcept;
public:
    static MemoryBreakdownEntry take_ownership(Handle h) noexcept;
    explicit MemoryBreakdownEntry(const emlite::Val &val) noexcept;
    MemoryBreakdownEntry() noexcept;
    [[nodiscard]] MemoryBreakdownEntry clone() const noexcept;
    /// Getter of the `bytes` attribute.
    [[nodiscard]] long long bytes() const;
    /// Setter of the `bytes` attribute.
    void bytes(long long value);
    /// Getter of the `attribution` attribute.
    [[nodiscard]] jsbind::TypedArray<MemoryAttribution> attribution() const;
    /// Setter of the `attribution` attribute.
    void attribution(const jsbind::TypedArray<MemoryAttribution>& value);
    /// Getter of the `types` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    /// Setter of the `types` attribute.
    void types(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind