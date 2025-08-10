#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SvcOutputMetadata
class SvcOutputMetadata : public emlite::Val {
  explicit SvcOutputMetadata(Handle h) noexcept;
public:
    static SvcOutputMetadata take_ownership(Handle h) noexcept;
    explicit SvcOutputMetadata(const emlite::Val &val) noexcept;
    SvcOutputMetadata() noexcept;
    [[nodiscard]] SvcOutputMetadata clone() const noexcept;
    /// Getter of the `temporalLayerId` attribute.
    [[nodiscard]] unsigned long temporalLayerId() const;
    /// Setter of the `temporalLayerId` attribute.
    void temporalLayerId(unsigned long value);
};

} // namespace webbind