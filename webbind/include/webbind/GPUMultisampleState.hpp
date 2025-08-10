#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUMultisampleState
/// [`GPUMultisampleState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUMultisampleState)
class GPUMultisampleState : public emlite::Val {
  explicit GPUMultisampleState(Handle h) noexcept;
public:
    static GPUMultisampleState take_ownership(Handle h) noexcept;
    explicit GPUMultisampleState(const emlite::Val &val) noexcept;
    GPUMultisampleState() noexcept;
    [[nodiscard]] GPUMultisampleState clone() const noexcept;
    [[nodiscard]] jsbind::Any count() const;
    void count(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any mask() const;
    void mask(const jsbind::Any& value);
    [[nodiscard]] bool alphaToCoverageEnabled() const;
    void alphaToCoverageEnabled(bool value);
};

} // namespace webbind