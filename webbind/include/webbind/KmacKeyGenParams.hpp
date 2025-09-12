#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type KmacKeyGenParams
class KmacKeyGenParams : public Algorithm {
  explicit KmacKeyGenParams(Handle h) noexcept;
public:
    static KmacKeyGenParams take_ownership(Handle h) noexcept;
    explicit KmacKeyGenParams(const emlite::Val &val) noexcept;
    KmacKeyGenParams() noexcept;
    [[nodiscard]] KmacKeyGenParams clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
};

} // namespace webbind