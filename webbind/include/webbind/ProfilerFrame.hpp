#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerFrame
class ProfilerFrame : public emlite::Val {
  explicit ProfilerFrame(Handle h) noexcept;
public:
    static ProfilerFrame take_ownership(Handle h) noexcept;
    explicit ProfilerFrame(const emlite::Val &val) noexcept;
    ProfilerFrame() noexcept;
    [[nodiscard]] ProfilerFrame clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `resourceId` attribute.
    [[nodiscard]] long long resourceId() const;
    /// Setter of the `resourceId` attribute.
    void resourceId(long long value);
    /// Getter of the `line` attribute.
    [[nodiscard]] long long line() const;
    /// Setter of the `line` attribute.
    void line(long long value);
    /// Getter of the `column` attribute.
    [[nodiscard]] long long column() const;
    /// Setter of the `column` attribute.
    void column(long long value);
};

} // namespace webbind