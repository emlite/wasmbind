#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerFrame
/// [`ProfilerFrame`](https://developer.mozilla.org/en-US/docs/Web/API/ProfilerFrame)
class ProfilerFrame : public emlite::Val {
  explicit ProfilerFrame(Handle h) noexcept;
public:
    static ProfilerFrame take_ownership(Handle h) noexcept;
    explicit ProfilerFrame(const emlite::Val &val) noexcept;
    ProfilerFrame() noexcept;
    [[nodiscard]] ProfilerFrame clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] long long resourceId() const;
    void resourceId(long long value);
    [[nodiscard]] long long line() const;
    void line(long long value);
    [[nodiscard]] long long column() const;
    void column(long long value);
};

} // namespace webbind