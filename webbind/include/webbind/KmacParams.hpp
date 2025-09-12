#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type KmacParams
class KmacParams : public Algorithm {
  explicit KmacParams(Handle h) noexcept;
public:
    static KmacParams take_ownership(Handle h) noexcept;
    explicit KmacParams(const emlite::Val &val) noexcept;
    KmacParams() noexcept;
    [[nodiscard]] KmacParams clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
    /// Getter of the `customization` attribute.
    [[nodiscard]] jsbind::Any customization() const;
    /// Setter of the `customization` attribute.
    void customization(const jsbind::Any& value);
};

} // namespace webbind