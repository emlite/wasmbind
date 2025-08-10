#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerSample
/// [`ProfilerSample`](https://developer.mozilla.org/en-US/docs/Web/API/ProfilerSample)
class ProfilerSample : public emlite::Val {
  explicit ProfilerSample(Handle h) noexcept;
public:
    static ProfilerSample take_ownership(Handle h) noexcept;
    explicit ProfilerSample(const emlite::Val &val) noexcept;
    ProfilerSample() noexcept;
    [[nodiscard]] ProfilerSample clone() const noexcept;
    [[nodiscard]] jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    [[nodiscard]] long long stackId() const;
    void stackId(long long value);
};

} // namespace webbind