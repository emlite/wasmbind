#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUCopyExternalImageSourceInfo
/// [`GPUCopyExternalImageSourceInfo`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCopyExternalImageSourceInfo)
class GPUCopyExternalImageSourceInfo : public emlite::Val {
  explicit GPUCopyExternalImageSourceInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageSourceInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageSourceInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageSourceInfo() noexcept;
    [[nodiscard]] GPUCopyExternalImageSourceInfo clone() const noexcept;
    [[nodiscard]] jsbind::Any source() const;
    void source(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any origin() const;
    void origin(const jsbind::Any& value);
    [[nodiscard]] bool flipY() const;
    void flipY(bool value);
};

} // namespace webbind