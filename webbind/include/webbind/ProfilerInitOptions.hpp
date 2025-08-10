#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerInitOptions
/// [`ProfilerInitOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ProfilerInitOptions)
class ProfilerInitOptions : public emlite::Val {
  explicit ProfilerInitOptions(Handle h) noexcept;
public:
    static ProfilerInitOptions take_ownership(Handle h) noexcept;
    explicit ProfilerInitOptions(const emlite::Val &val) noexcept;
    ProfilerInitOptions() noexcept;
    [[nodiscard]] ProfilerInitOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any sampleInterval() const;
    void sampleInterval(const jsbind::Any& value);
    [[nodiscard]] unsigned long maxBufferSize() const;
    void maxBufferSize(unsigned long value);
};

} // namespace webbind