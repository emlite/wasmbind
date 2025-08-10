#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLGemmOptions
class MLGemmOptions : public MLOperatorOptions {
  explicit MLGemmOptions(Handle h) noexcept;
public:
    static MLGemmOptions take_ownership(Handle h) noexcept;
    explicit MLGemmOptions(const emlite::Val &val) noexcept;
    MLGemmOptions() noexcept;
    [[nodiscard]] MLGemmOptions clone() const noexcept;
    /// Getter of the `c` attribute.
    [[nodiscard]] MLOperand c() const;
    /// Setter of the `c` attribute.
    void c(const MLOperand& value);
    /// Getter of the `alpha` attribute.
    [[nodiscard]] double alpha() const;
    /// Setter of the `alpha` attribute.
    void alpha(double value);
    /// Getter of the `beta` attribute.
    [[nodiscard]] double beta() const;
    /// Setter of the `beta` attribute.
    void beta(double value);
    /// Getter of the `aTranspose` attribute.
    [[nodiscard]] bool aTranspose() const;
    /// Setter of the `aTranspose` attribute.
    void aTranspose(bool value);
    /// Getter of the `bTranspose` attribute.
    [[nodiscard]] bool bTranspose() const;
    /// Setter of the `bTranspose` attribute.
    void bTranspose(bool value);
};

} // namespace webbind