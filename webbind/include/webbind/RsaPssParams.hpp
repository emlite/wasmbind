#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaPssParams
class RsaPssParams : public Algorithm {
  explicit RsaPssParams(Handle h) noexcept;
public:
    static RsaPssParams take_ownership(Handle h) noexcept;
    explicit RsaPssParams(const emlite::Val &val) noexcept;
    RsaPssParams() noexcept;
    [[nodiscard]] RsaPssParams clone() const noexcept;
    /// Getter of the `saltLength` attribute.
    [[nodiscard]] unsigned long saltLength() const;
    /// Setter of the `saltLength` attribute.
    void saltLength(unsigned long value);
};

} // namespace webbind