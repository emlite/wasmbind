#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MLRankRange
class MLRankRange : public emlite::Val {
  explicit MLRankRange(Handle h) noexcept;
public:
    static MLRankRange take_ownership(Handle h) noexcept;
    explicit MLRankRange(const emlite::Val &val) noexcept;
    MLRankRange() noexcept;
    [[nodiscard]] MLRankRange clone() const noexcept;
    /// Getter of the `min` attribute.
    [[nodiscard]] unsigned long min() const;
    /// Setter of the `min` attribute.
    void min(unsigned long value);
    /// Getter of the `max` attribute.
    [[nodiscard]] unsigned long max() const;
    /// Setter of the `max` attribute.
    void max(unsigned long value);
};

} // namespace webbind