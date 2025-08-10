#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TableDescriptor
class TableDescriptor : public emlite::Val {
  explicit TableDescriptor(Handle h) noexcept;
public:
    static TableDescriptor take_ownership(Handle h) noexcept;
    explicit TableDescriptor(const emlite::Val &val) noexcept;
    TableDescriptor() noexcept;
    [[nodiscard]] TableDescriptor clone() const noexcept;
    /// Getter of the `element` attribute.
    [[nodiscard]] TableKind element() const;
    /// Setter of the `element` attribute.
    void element(const TableKind& value);
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