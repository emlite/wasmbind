#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SvcOutputMetadata
/// [`SvcOutputMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/SvcOutputMetadata)
class SvcOutputMetadata : public emlite::Val {
  explicit SvcOutputMetadata(Handle h) noexcept;
public:
    static SvcOutputMetadata take_ownership(Handle h) noexcept;
    explicit SvcOutputMetadata(const emlite::Val &val) noexcept;
    SvcOutputMetadata() noexcept;
    [[nodiscard]] SvcOutputMetadata clone() const noexcept;
    [[nodiscard]] unsigned long temporalLayerId() const;
    void temporalLayerId(unsigned long value);
};

} // namespace webbind