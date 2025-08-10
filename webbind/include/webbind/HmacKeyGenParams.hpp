#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type HmacKeyGenParams
class HmacKeyGenParams : public Algorithm {
  explicit HmacKeyGenParams(Handle h) noexcept;
public:
    static HmacKeyGenParams take_ownership(Handle h) noexcept;
    explicit HmacKeyGenParams(const emlite::Val &val) noexcept;
    HmacKeyGenParams() noexcept;
    [[nodiscard]] HmacKeyGenParams clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
};

} // namespace webbind