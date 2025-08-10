#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface GPUError
/// [`GPUError`](https://developer.mozilla.org/en-US/docs/Web/API/GPUError)
class GPUError : public emlite::Val {
    explicit GPUError(Handle h) noexcept;
public:
    explicit GPUError(const emlite::Val &val) noexcept;
    static GPUError take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`GPUError.message`](https://developer.mozilla.org/en-US/docs/Web/API/GPUError/message)
    /// [`GPUError.message`](https://developer.mozilla.org/en-US/docs/Web/API/GPUError/message)
    [[nodiscard]] jsbind::String message() const;
};

} // namespace webbind