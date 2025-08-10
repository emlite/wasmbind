#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class GPUQuerySet;

/// Dictionary type GPURenderPassTimestampWrites
/// [`GPURenderPassTimestampWrites`](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPassTimestampWrites)
class GPURenderPassTimestampWrites : public emlite::Val {
  explicit GPURenderPassTimestampWrites(Handle h) noexcept;
public:
    static GPURenderPassTimestampWrites take_ownership(Handle h) noexcept;
    explicit GPURenderPassTimestampWrites(const emlite::Val &val) noexcept;
    GPURenderPassTimestampWrites() noexcept;
    [[nodiscard]] GPURenderPassTimestampWrites clone() const noexcept;
    [[nodiscard]] GPUQuerySet querySet() const;
    void querySet(const GPUQuerySet& value);
    [[nodiscard]] jsbind::Any beginningOfPassWriteIndex() const;
    void beginningOfPassWriteIndex(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any endOfPassWriteIndex() const;
    void endOfPassWriteIndex(const jsbind::Any& value);
};

} // namespace webbind