#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AesKeyGenParams
class AesKeyGenParams : public Algorithm {
  explicit AesKeyGenParams(Handle h) noexcept;
public:
    static AesKeyGenParams take_ownership(Handle h) noexcept;
    explicit AesKeyGenParams(const emlite::Val &val) noexcept;
    AesKeyGenParams() noexcept;
    [[nodiscard]] AesKeyGenParams clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned short length() const;
    /// Setter of the `length` attribute.
    void length(unsigned short value);
};

} // namespace webbind