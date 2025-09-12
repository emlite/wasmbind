#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type Argon2Params
class Argon2Params : public Algorithm {
  explicit Argon2Params(Handle h) noexcept;
public:
    static Argon2Params take_ownership(Handle h) noexcept;
    explicit Argon2Params(const emlite::Val &val) noexcept;
    Argon2Params() noexcept;
    [[nodiscard]] Argon2Params clone() const noexcept;
    /// Getter of the `nonce` attribute.
    [[nodiscard]] jsbind::Any nonce() const;
    /// Setter of the `nonce` attribute.
    void nonce(const jsbind::Any& value);
    /// Getter of the `parallelism` attribute.
    [[nodiscard]] unsigned long parallelism() const;
    /// Setter of the `parallelism` attribute.
    void parallelism(unsigned long value);
    /// Getter of the `memory` attribute.
    [[nodiscard]] unsigned long memory() const;
    /// Setter of the `memory` attribute.
    void memory(unsigned long value);
    /// Getter of the `passes` attribute.
    [[nodiscard]] unsigned long passes() const;
    /// Setter of the `passes` attribute.
    void passes(unsigned long value);
    /// Getter of the `version` attribute.
    [[nodiscard]] unsigned char version() const;
    /// Setter of the `version` attribute.
    void version(unsigned char value);
    /// Getter of the `secretValue` attribute.
    [[nodiscard]] jsbind::Any secretValue() const;
    /// Setter of the `secretValue` attribute.
    void secretValue(const jsbind::Any& value);
    /// Getter of the `associatedData` attribute.
    [[nodiscard]] jsbind::Any associatedData() const;
    /// Setter of the `associatedData` attribute.
    void associatedData(const jsbind::Any& value);
};

} // namespace webbind