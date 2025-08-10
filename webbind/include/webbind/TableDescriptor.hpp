#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TableDescriptor
/// [`TableDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/TableDescriptor)
class TableDescriptor : public emlite::Val {
  explicit TableDescriptor(Handle h) noexcept;
public:
    static TableDescriptor take_ownership(Handle h) noexcept;
    explicit TableDescriptor(const emlite::Val &val) noexcept;
    TableDescriptor() noexcept;
    [[nodiscard]] TableDescriptor clone() const noexcept;
    [[nodiscard]] TableKind element() const;
    void element(const TableKind& value);
    [[nodiscard]] unsigned long initial() const;
    void initial(unsigned long value);
    [[nodiscard]] unsigned long maximum() const;
    void maximum(unsigned long value);
};

} // namespace webbind