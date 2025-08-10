#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type EcdsaParams
/// [`EcdsaParams`](https://developer.mozilla.org/en-US/docs/Web/API/EcdsaParams)
class EcdsaParams : public Algorithm {
  explicit EcdsaParams(Handle h) noexcept;
public:
    static EcdsaParams take_ownership(Handle h) noexcept;
    explicit EcdsaParams(const emlite::Val &val) noexcept;
    EcdsaParams() noexcept;
    [[nodiscard]] EcdsaParams clone() const noexcept;
    [[nodiscard]] jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
};

} // namespace webbind