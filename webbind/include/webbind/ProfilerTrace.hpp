#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ProfilerFrame.hpp"
#include "ProfilerStack.hpp"
#include "ProfilerSample.hpp"

namespace webbind {

/// Dictionary type ProfilerTrace
/// [`ProfilerTrace`](https://developer.mozilla.org/en-US/docs/Web/API/ProfilerTrace)
class ProfilerTrace : public emlite::Val {
  explicit ProfilerTrace(Handle h) noexcept;
public:
    static ProfilerTrace take_ownership(Handle h) noexcept;
    explicit ProfilerTrace(const emlite::Val &val) noexcept;
    ProfilerTrace() noexcept;
    [[nodiscard]] ProfilerTrace clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> resources() const;
    void resources(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<ProfilerFrame> frames() const;
    void frames(const jsbind::TypedArray<ProfilerFrame>& value);
    [[nodiscard]] jsbind::TypedArray<ProfilerStack> stacks() const;
    void stacks(const jsbind::TypedArray<ProfilerStack>& value);
    [[nodiscard]] jsbind::TypedArray<ProfilerSample> samples() const;
    void samples(const jsbind::TypedArray<ProfilerSample>& value);
};

} // namespace webbind