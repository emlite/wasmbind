#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type Pbkdf2Params
class Pbkdf2Params : public Algorithm {
  explicit Pbkdf2Params(Handle h) noexcept;
public:
    static Pbkdf2Params take_ownership(Handle h) noexcept;
    explicit Pbkdf2Params(const emlite::Val &val) noexcept;
    Pbkdf2Params() noexcept;
    [[nodiscard]] Pbkdf2Params clone() const noexcept;
    /// Getter of the `salt` attribute.
    [[nodiscard]] jsbind::Any salt() const;
    /// Setter of the `salt` attribute.
    void salt(const jsbind::Any& value);
    /// Getter of the `iterations` attribute.
    [[nodiscard]] unsigned long iterations() const;
    /// Setter of the `iterations` attribute.
    void iterations(unsigned long value);
    /// Getter of the `hash` attribute.
    [[nodiscard]] jsbind::Any hash() const;
    /// Setter of the `hash` attribute.
    void hash(const jsbind::Any& value);
};

} // namespace webbind