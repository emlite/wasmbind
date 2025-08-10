#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type MemoryDescriptor
class MemoryDescriptor : public emlite::Val {
  explicit MemoryDescriptor(Handle h) noexcept;
public:
    static MemoryDescriptor take_ownership(Handle h) noexcept;
    explicit MemoryDescriptor(const emlite::Val &val) noexcept;
    MemoryDescriptor() noexcept;
    [[nodiscard]] MemoryDescriptor clone() const noexcept;
    /// Getter of the `initial` attribute.
    [[nodiscard]] unsigned long initial() const;
    /// Setter of the `initial` attribute.
    void initial(unsigned long value);
    /// Getter of the `maximum` attribute.
    [[nodiscard]] unsigned long maximum() const;
    /// Setter of the `maximum` attribute.
    void maximum(unsigned long value);
};

} // namespace webbind