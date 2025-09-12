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
    /// [`WebGLActiveInfo.size`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/size)
    /// [`WebGLActiveInfo.size`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/size)
    [[nodiscard]] int size() const;
    /// [`WebGLActiveInfo.type`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/type)
    /// [`WebGLActiveInfo.type`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/type)
    [[nodiscard]] uint32_t type() const;
    /// [`WebGLActiveInfo.name`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/name)
    /// [`WebGLActiveInfo.name`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo/name)
    [[nodiscard]] jsbind::String name() const;
};

} // namespace webbind