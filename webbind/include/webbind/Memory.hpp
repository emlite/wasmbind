#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The Memory class.
/// [`Memory`](https://developer.mozilla.org/en-US/docs/Web/API/Memory)
class Memory : public emlite::Val {
    explicit Memory(Handle h) noexcept;

public:
    explicit Memory(const emlite::Val &val) noexcept;
    static Memory take_ownership(Handle h) noexcept;

    [[nodiscard]] Memory clone() const noexcept;
    /// The `new Memory(..)` constructor, creating a new Memory instance
    Memory(const jsbind::Any& descriptor);
    /// The grow method.
    /// [`Memory.grow`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/grow)
    unsigned long grow(unsigned long delta);
    /// The toFixedLengthBuffer method.
    /// [`Memory.toFixedLengthBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/toFixedLengthBuffer)
    jsbind::ArrayBuffer toFixedLengthBuffer();
    /// The toResizableBuffer method.
    /// [`Memory.toResizableBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/toResizableBuffer)
    jsbind::ArrayBuffer toResizableBuffer();
    /// Getter of the `buffer` attribute.
    /// [`Memory.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/buffer)
    [[nodiscard]] jsbind::ArrayBuffer buffer() const;
};

