#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MemoryAttribution.hpp"

namespace webbind {

/// Dictionary type MemoryBreakdownEntry
/// [`MemoryBreakdownEntry`](https://developer.mozilla.org/en-US/docs/Web/API/MemoryBreakdownEntry)
class MemoryBreakdownEntry : public emlite::Val {
  explicit MemoryBreakdownEntry(Handle h) noexcept;
public:
    static MemoryBreakdownEntry take_ownership(Handle h) noexcept;
    explicit MemoryBreakdownEntry(const emlite::Val &val) noexcept;
    MemoryBreakdownEntry() noexcept;
    [[nodiscard]] MemoryBreakdownEntry clone() const noexcept;
    [[nodiscard]] long long bytes() const;
    void bytes(long long value);
    [[nodiscard]] jsbind::TypedArray<MemoryAttribution> attribution() const;
    void attribution(const jsbind::TypedArray<MemoryAttribution>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> types() const;
    void types(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind