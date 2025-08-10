#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "ProfilerFrame.hpp"
#include "ProfilerStack.hpp"
#include "ProfilerSample.hpp"

namespace webbind {

/// Dictionary type ProfilerTrace
class ProfilerTrace : public emlite::Val {
  explicit ProfilerTrace(Handle h) noexcept;
public:
    static ProfilerTrace take_ownership(Handle h) noexcept;
    explicit ProfilerTrace(const emlite::Val &val) noexcept;
    ProfilerTrace() noexcept;
    [[nodiscard]] ProfilerTrace clone() const noexcept;
    /// Getter of the `resources` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> resources() const;
    /// Setter of the `resources` attribute.
    void resources(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `frames` attribute.
    [[nodiscard]] jsbind::TypedArray<ProfilerFrame> frames() const;
    /// Setter of the `frames` attribute.
    void frames(const jsbind::TypedArray<ProfilerFrame>& value);
    /// Getter of the `stacks` attribute.
    [[nodiscard]] jsbind::TypedArray<ProfilerStack> stacks() const;
    /// Setter of the `stacks` attribute.
    void stacks(const jsbind::TypedArray<ProfilerStack>& value);
    /// Getter of the `samples` attribute.
    [[nodiscard]] jsbind::TypedArray<ProfilerSample> samples() const;
    /// Setter of the `samples` attribute.
    void samples(const jsbind::TypedArray<ProfilerSample>& value);
};

} // namespace webbind