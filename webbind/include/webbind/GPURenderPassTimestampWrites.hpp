#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUQuerySet;

/// Dictionary type GPURenderPassTimestampWrites
class GPURenderPassTimestampWrites : public emlite::Val {
  explicit GPURenderPassTimestampWrites(Handle h) noexcept;
public:
    static GPURenderPassTimestampWrites take_ownership(Handle h) noexcept;
    explicit GPURenderPassTimestampWrites(const emlite::Val &val) noexcept;
    GPURenderPassTimestampWrites() noexcept;
    [[nodiscard]] GPURenderPassTimestampWrites clone() const noexcept;
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