#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RsaOtherPrimesInfo
class RsaOtherPrimesInfo : public emlite::Val {
  explicit RsaOtherPrimesInfo(Handle h) noexcept;
public:
    static RsaOtherPrimesInfo take_ownership(Handle h) noexcept;
    explicit RsaOtherPrimesInfo(const emlite::Val &val) noexcept;
    RsaOtherPrimesInfo() noexcept;
    [[nodiscard]] RsaOtherPrimesInfo clone() const noexcept;
    /// Getter of the `r` attribute.
    [[nodiscard]] jsbind::String r() const;
    /// Setter of the `r` attribute.
    void r(const jsbind::String& value);
    /// Getter of the `d` attribute.
    [[nodiscard]] jsbind::String d() const;
    /// Setter of the `d` attribute.
    void d(const jsbind::String& value);
    /// Getter of the `t` attribute.
    [[nodiscard]] jsbind::String t() const;
    /// Setter of the `t` attribute.
    void t(const jsbind::String& value);
};

} // namespace webbind