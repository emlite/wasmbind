#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUBindGroupEntry
/// [`GPUBindGroupEntry`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupEntry)
class GPUBindGroupEntry : public emlite::Val {
  explicit GPUBindGroupEntry(Handle h) noexcept;
public:
    static GPUBindGroupEntry take_ownership(Handle h) noexcept;
    explicit GPUBindGroupEntry(const emlite::Val &val) noexcept;
    GPUBindGroupEntry() noexcept;
    [[nodiscard]] GPUBindGroupEntry clone() const noexcept;
    [[nodiscard]] jsbind::Any binding() const;
    void binding(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any resource() const;
    void resource(const jsbind::Any& value);
};

} // namespace webbind