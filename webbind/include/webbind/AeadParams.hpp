#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type AeadParams
class AeadParams : public Algorithm {
  explicit AeadParams(Handle h) noexcept;
public:
    static AeadParams take_ownership(Handle h) noexcept;
    explicit AeadParams(const emlite::Val &val) noexcept;
    AeadParams() noexcept;
    [[nodiscard]] AeadParams clone() const noexcept;
    /// Getter of the `iv` attribute.
    [[nodiscard]] jsbind::Any iv() const;
    /// Setter of the `iv` attribute.
    void iv(const jsbind::Any& value);
    /// Getter of the `additionalData` attribute.
    [[nodiscard]] jsbind::Any additionalData() const;
    /// Setter of the `additionalData` attribute.
    void additionalData(const jsbind::Any& value);
    /// Getter of the `tagLength` attribute.
    [[nodiscard]] unsigned char tagLength() const;
    /// Setter of the `tagLength` attribute.
    void tagLength(unsigned char value);
};

} // namespace webbind