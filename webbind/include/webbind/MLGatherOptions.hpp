#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

/// Dictionary type MLGatherOptions
/// [`MLGatherOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLGatherOptions)
class MLGatherOptions : public MLOperatorOptions {
  explicit MLGatherOptions(Handle h) noexcept;
public:
    static MLGatherOptions take_ownership(Handle h) noexcept;
    explicit MLGatherOptions(const emlite::Val &val) noexcept;
    MLGatherOptions() noexcept;
    [[nodiscard]] MLGatherOptions clone() const noexcept;
    [[nodiscard]] unsigned long axis() const;
    void axis(unsigned long value);
};

} // namespace webbind