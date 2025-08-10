#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface WebGLActiveInfo
/// [`WebGLActiveInfo`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo)
class WebGLActiveInfo : public emlite::Val {
    explicit WebGLActiveInfo(Handle h) noexcept;
public:
    explicit WebGLActiveInfo(const emlite::Val &val) noexcept;
    static WebGLActiveInfo take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLActiveInfo clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `size` attribute.
    /// [`WebGLActiveInfo.size`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/size)
    [[nodiscard]] jsbind::Any size() const;
    /// Getter of the `type` attribute.
    /// [`WebGLActiveInfo.type`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/type)
    [[nodiscard]] jsbind::Any type() const;
    /// Getter of the `name` attribute.
    /// [`WebGLActiveInfo.name`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/name)
    [[nodiscard]] jsbind::String name() const;
};

} // namespace webbind