#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type HkdfParams
class HkdfParams : public Algorithm {
  explicit HkdfParams(Handle h) noexcept;
public:
    static HkdfParams take_ownership(Handle h) noexcept;
    explicit HkdfParams(const emlite::Val &val) noexcept;
    HkdfParams() noexcept;
    [[nodiscard]] HkdfParams clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
    /// Getter of the `salt` attribute.
    [[nodiscard]] jsbind::Any salt() const;
    /// Setter of the `salt` attribute.
    void salt(const jsbind::Any& value);
    /// Getter of the `info` attribute.
    [[nodiscard]] jsbind::Any info() const;
    /// Setter of the `info` attribute.
    void info(const jsbind::Any& value);
};

} // namespace webbind