#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUError class.
/// [`GPUError`](https://developer.mozilla.org/en-US/docs/Web/API/GPUError)
class GPUError : public emlite::Val {
    explicit GPUError(Handle h) noexcept;

public:
    explicit GPUError(const emlite::Val &val) noexcept;
    static GPUError take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUError clone() const noexcept;
    /// Getter of the `message` attribute.
    /// [`GPUError.message`](https://developer.mozilla.org/en-US/docs/Web/API/GPUError/message)
    [[nodiscard]] jsbind::String message() const;
};

