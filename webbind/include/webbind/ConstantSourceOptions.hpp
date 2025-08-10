#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ConstantSourceOptions
/// [`ConstantSourceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ConstantSourceOptions)
class ConstantSourceOptions : public emlite::Val {
  explicit ConstantSourceOptions(Handle h) noexcept;
public:
    static ConstantSourceOptions take_ownership(Handle h) noexcept;
    explicit ConstantSourceOptions(const emlite::Val &val) noexcept;
    ConstantSourceOptions() noexcept;
    [[nodiscard]] ConstantSourceOptions clone() const noexcept;
    [[nodiscard]] float offset() const;
    void offset(float value);
};

} // namespace webbind