#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUQuerySet;

/// Dictionary type GPUComputePassTimestampWrites
class GPUComputePassTimestampWrites : public emlite::Val {
  explicit GPUComputePassTimestampWrites(Handle h) noexcept;
public:
    static GPUComputePassTimestampWrites take_ownership(Handle h) noexcept;
    explicit GPUComputePassTimestampWrites(const emlite::Val &val) noexcept;
    GPUComputePassTimestampWrites() noexcept;
    [[nodiscard]] GPUComputePassTimestampWrites clone() const noexcept;
    /// Getter of the `querySet` attribute.
    [[nodiscard]] GPUQuerySet querySet() const;
    /// Setter of the `querySet` attribute.
    void querySet(const GPUQuerySet& value);
    /// Getter of the `beginningOfPassWriteIndex` attribute.
    [[nodiscard]] jsbind::Any beginningOfPassWriteIndex() const;
    /// Setter of the `beginningOfPassWriteIndex` attribute.
    void beginningOfPassWriteIndex(const jsbind::Any& value);
    /// Getter of the `endOfPassWriteIndex` attribute.
    [[nodiscard]] jsbind::Any endOfPassWriteIndex() const;
    /// Setter of the `endOfPassWriteIndex` attribute.
    void endOfPassWriteIndex(const jsbind::Any& value);
};

} // namespace webbind