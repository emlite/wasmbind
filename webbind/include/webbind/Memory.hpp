#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MemoryDescriptor;

/// Interface Memory
/// [`Memory`](https://developer.mozilla.org/en-US/docs/Web/API/Memory)
class Memory : public emlite::Val {
    explicit Memory(Handle h) noexcept;
public:
    explicit Memory(const emlite::Val &val) noexcept;
    static Memory take_ownership(Handle h) noexcept;
    [[nodiscard]] Memory clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Memory(..)` constructor, creating a new Memory instance
    Memory(const MemoryDescriptor& descriptor);
    /// The grow method.
    /// [`Memory.grow`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/grow)
    unsigned long grow(unsigned long delta);
    /// The toFixedLengthBuffer method.
    /// [`Memory.toFixedLengthBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/toFixedLengthBuffer)
    jsbind::ArrayBuffer toFixedLengthBuffer();
    /// The toResizableBuffer method.
    /// [`Memory.toResizableBuffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/toResizableBuffer)
    jsbind::ArrayBuffer toResizableBuffer();
    /// [`Memory.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/buffer)
    /// [`Memory.buffer`](https://developer.mozilla.org/en-US/docs/Web/API/Memory/buffer)
    [[nodiscard]] jsbind::ArrayBuffer buffer() const;
};

} // namespace webbind