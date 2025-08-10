#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerSample
class ProfilerSample : public emlite::Val {
  explicit ProfilerSample(Handle h) noexcept;
public:
    static ProfilerSample take_ownership(Handle h) noexcept;
    explicit ProfilerSample(const emlite::Val &val) noexcept;
    ProfilerSample() noexcept;
    [[nodiscard]] ProfilerSample clone() const noexcept;
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(const jsbind::Any& value);
    /// Getter of the `stackId` attribute.
    [[nodiscard]] long long stackId() const;
    /// Setter of the `stackId` attribute.
    void stackId(long long value);
};

} // namespace webbind