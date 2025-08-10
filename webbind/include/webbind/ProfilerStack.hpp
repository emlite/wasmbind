#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProfilerStack
/// [`ProfilerStack`](https://developer.mozilla.org/en-US/docs/Web/API/ProfilerStack)
class ProfilerStack : public emlite::Val {
  explicit ProfilerStack(Handle h) noexcept;
public:
    static ProfilerStack take_ownership(Handle h) noexcept;
    explicit ProfilerStack(const emlite::Val &val) noexcept;
    ProfilerStack() noexcept;
    [[nodiscard]] ProfilerStack clone() const noexcept;
    [[nodiscard]] long long parentId() const;
    void parentId(long long value);
    [[nodiscard]] long long frameId() const;
    void frameId(long long value);
};

} // namespace webbind