#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type LockInfo
class LockInfo : public emlite::Val {
  explicit LockInfo(Handle h) noexcept;
public:
    static LockInfo take_ownership(Handle h) noexcept;
    explicit LockInfo(const emlite::Val &val) noexcept;
    LockInfo() noexcept;
    [[nodiscard]] LockInfo clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `mode` attribute.
    [[nodiscard]] LockMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const LockMode& value);
    /// Getter of the `clientId` attribute.
    [[nodiscard]] jsbind::String clientId() const;
    /// Setter of the `clientId` attribute.
    void clientId(const jsbind::String& value);
};

} // namespace webbind