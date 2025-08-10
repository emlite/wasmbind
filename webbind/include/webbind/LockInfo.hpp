#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LockInfo
/// [`LockInfo`](https://developer.mozilla.org/en-US/docs/Web/API/LockInfo)
class LockInfo : public emlite::Val {
  explicit LockInfo(Handle h) noexcept;
public:
    static LockInfo take_ownership(Handle h) noexcept;
    explicit LockInfo(const emlite::Val &val) noexcept;
    LockInfo() noexcept;
    [[nodiscard]] LockInfo clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] LockMode mode() const;
    void mode(const LockMode& value);
    [[nodiscard]] jsbind::String clientId() const;
    void clientId(const jsbind::String& value);
};

} // namespace webbind