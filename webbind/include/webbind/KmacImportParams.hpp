#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type KmacImportParams
class KmacImportParams : public Algorithm {
  explicit KmacImportParams(Handle h) noexcept;
public:
    static KmacImportParams take_ownership(Handle h) noexcept;
    explicit KmacImportParams(const emlite::Val &val) noexcept;
    KmacImportParams() noexcept;
    [[nodiscard]] KmacImportParams clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
};

} // namespace webbind