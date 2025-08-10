#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type EcdsaParams
class EcdsaParams : public Algorithm {
  explicit EcdsaParams(Handle h) noexcept;
public:
    static EcdsaParams take_ownership(Handle h) noexcept;
    explicit EcdsaParams(const emlite::Val &val) noexcept;
    EcdsaParams() noexcept;
    [[nodiscard]] EcdsaParams clone() const noexcept;
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
};

} // namespace webbind