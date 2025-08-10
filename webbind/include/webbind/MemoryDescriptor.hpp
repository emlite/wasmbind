#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MemoryDescriptor
/// [`MemoryDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/MemoryDescriptor)
class MemoryDescriptor : public emlite::Val {
  explicit MemoryDescriptor(Handle h) noexcept;
public:
    static MemoryDescriptor take_ownership(Handle h) noexcept;
    explicit MemoryDescriptor(const emlite::Val &val) noexcept;
    MemoryDescriptor() noexcept;
    [[nodiscard]] MemoryDescriptor clone() const noexcept;
    [[nodiscard]] unsigned long initial() const;
    void initial(unsigned long value);
    [[nodiscard]] unsigned long maximum() const;
    void maximum(unsigned long value);
};

} // namespace webbind