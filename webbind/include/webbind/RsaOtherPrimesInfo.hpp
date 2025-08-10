#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RsaOtherPrimesInfo
/// [`RsaOtherPrimesInfo`](https://developer.mozilla.org/en-US/docs/Web/API/RsaOtherPrimesInfo)
class RsaOtherPrimesInfo : public emlite::Val {
  explicit RsaOtherPrimesInfo(Handle h) noexcept;
public:
    static RsaOtherPrimesInfo take_ownership(Handle h) noexcept;
    explicit RsaOtherPrimesInfo(const emlite::Val &val) noexcept;
    RsaOtherPrimesInfo() noexcept;
    [[nodiscard]] RsaOtherPrimesInfo clone() const noexcept;
    [[nodiscard]] jsbind::String r() const;
    void r(const jsbind::String& value);
    [[nodiscard]] jsbind::String d() const;
    void d(const jsbind::String& value);
    [[nodiscard]] jsbind::String t() const;
    void t(const jsbind::String& value);
};

} // namespace webbind