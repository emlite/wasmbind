#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type HmacImportParams
class HmacImportParams : public Algorithm {
  explicit HmacImportParams(Handle h) noexcept;
public:
    static HmacImportParams take_ownership(Handle h) noexcept;
    explicit HmacImportParams(const emlite::Val &val) noexcept;
    HmacImportParams() noexcept;
    [[nodiscard]] HmacImportParams clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
};

} // namespace webbind