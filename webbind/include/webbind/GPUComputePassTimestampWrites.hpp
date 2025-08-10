#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUQuerySet;

/// Dictionary type GPUComputePassTimestampWrites
/// [`GPUComputePassTimestampWrites`](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePassTimestampWrites)
class GPUComputePassTimestampWrites : public emlite::Val {
  explicit GPUComputePassTimestampWrites(Handle h) noexcept;
public:
    static GPUComputePassTimestampWrites take_ownership(Handle h) noexcept;
    explicit GPUComputePassTimestampWrites(const emlite::Val &val) noexcept;
    GPUComputePassTimestampWrites() noexcept;
    [[nodiscard]] GPUComputePassTimestampWrites clone() const noexcept;
    [[nodiscard]] GPUQuerySet querySet() const;
    void querySet(const GPUQuerySet& value);
    [[nodiscard]] jsbind::Any beginningOfPassWriteIndex() const;
    void beginningOfPassWriteIndex(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any endOfPassWriteIndex() const;
    void endOfPassWriteIndex(const jsbind::Any& value);
};

} // namespace webbind