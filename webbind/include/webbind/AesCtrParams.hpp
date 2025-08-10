#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesCtrParams
class AesCtrParams : public Algorithm {
  explicit AesCtrParams(Handle h) noexcept;
public:
    static AesCtrParams take_ownership(Handle h) noexcept;
    explicit AesCtrParams(const emlite::Val &val) noexcept;
    AesCtrParams() noexcept;
    [[nodiscard]] AesCtrParams clone() const noexcept;
    /// Getter of the `counter` attribute.
    [[nodiscard]] jsbind::Any counter() const;
    /// Setter of the `counter` attribute.
    void counter(const jsbind::Any& value);
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned char length() const;
    /// Setter of the `length` attribute.
    void length(unsigned char value);
};

} // namespace webbind