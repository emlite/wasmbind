#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type GPUCopyExternalImageSourceInfo
class GPUCopyExternalImageSourceInfo : public emlite::Val {
  explicit GPUCopyExternalImageSourceInfo(Handle h) noexcept;
public:
    static GPUCopyExternalImageSourceInfo take_ownership(Handle h) noexcept;
    explicit GPUCopyExternalImageSourceInfo(const emlite::Val &val) noexcept;
    GPUCopyExternalImageSourceInfo() noexcept;
    [[nodiscard]] GPUCopyExternalImageSourceInfo clone() const noexcept;
    /// Getter of the `source` attribute.
    [[nodiscard]] jsbind::Any source() const;
    /// Setter of the `source` attribute.
    void source(const jsbind::Any& value);
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::Any origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::Any& value);
    /// Getter of the `flipY` attribute.
    [[nodiscard]] bool flipY() const;
    /// Setter of the `flipY` attribute.
    void flipY(bool value);
};

} // namespace webbind