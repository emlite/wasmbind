#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerStack
class ProfilerStack : public emlite::Val {
  explicit ProfilerStack(Handle h) noexcept;
public:
    static ProfilerStack take_ownership(Handle h) noexcept;
    explicit ProfilerStack(const emlite::Val &val) noexcept;
    ProfilerStack() noexcept;
    [[nodiscard]] ProfilerStack clone() const noexcept;
    /// Getter of the `parentId` attribute.
    [[nodiscard]] long long parentId() const;
    /// Setter of the `parentId` attribute.
    void parentId(long long value);
    /// Getter of the `frameId` attribute.
    [[nodiscard]] long long frameId() const;
    /// Setter of the `frameId` attribute.
    void frameId(long long value);
};

} // namespace webbind