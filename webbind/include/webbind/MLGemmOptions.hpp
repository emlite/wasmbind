#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MLOperatorOptions.hpp"

namespace webbind {

class MLOperand;

/// Dictionary type MLGemmOptions
/// [`MLGemmOptions`](https://developer.mozilla.org/en-US/docs/Web/API/MLGemmOptions)
class MLGemmOptions : public MLOperatorOptions {
  explicit MLGemmOptions(Handle h) noexcept;
public:
    static MLGemmOptions take_ownership(Handle h) noexcept;
    explicit MLGemmOptions(const emlite::Val &val) noexcept;
    MLGemmOptions() noexcept;
    [[nodiscard]] MLGemmOptions clone() const noexcept;
    [[nodiscard]] MLOperand c() const;
    void c(const MLOperand& value);
    [[nodiscard]] double alpha() const;
    void alpha(double value);
    [[nodiscard]] double beta() const;
    void beta(double value);
    [[nodiscard]] bool aTranspose() const;
    void aTranspose(bool value);
    [[nodiscard]] bool bTranspose() const;
    void bTranspose(bool value);
};

} // namespace webbind