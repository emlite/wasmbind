#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerInitOptions
class ProfilerInitOptions : public emlite::Val {
  explicit ProfilerInitOptions(Handle h) noexcept;
public:
    static ProfilerInitOptions take_ownership(Handle h) noexcept;
    explicit ProfilerInitOptions(const emlite::Val &val) noexcept;
    ProfilerInitOptions() noexcept;
    [[nodiscard]] ProfilerInitOptions clone() const noexcept;
    /// Getter of the `sampleInterval` attribute.
    [[nodiscard]] jsbind::Any sampleInterval() const;
    /// Setter of the `sampleInterval` attribute.
    void sampleInterval(const jsbind::Any& value);
    /// Getter of the `maxBufferSize` attribute.
    [[nodiscard]] unsigned long maxBufferSize() const;
    /// Setter of the `maxBufferSize` attribute.
    void maxBufferSize(unsigned long value);
};

} // namespace webbind