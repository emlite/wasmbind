#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type CShakeParams
class CShakeParams : public Algorithm {
  explicit CShakeParams(Handle h) noexcept;
public:
    static CShakeParams take_ownership(Handle h) noexcept;
    explicit CShakeParams(const emlite::Val &val) noexcept;
    CShakeParams() noexcept;
    [[nodiscard]] CShakeParams clone() const noexcept;
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
    /// Getter of the `functionName` attribute.
    [[nodiscard]] jsbind::Any functionName() const;
    /// Setter of the `functionName` attribute.
    void functionName(const jsbind::Any& value);
    /// Getter of the `customization` attribute.
    [[nodiscard]] jsbind::Any customization() const;
    /// Setter of the `customization` attribute.
    void customization(const jsbind::Any& value);
};

} // namespace webbind