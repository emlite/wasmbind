#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type Pbkdf2Params
/// [`Pbkdf2Params`](https://developer.mozilla.org/en-US/docs/Web/API/Pbkdf2Params)
class Pbkdf2Params : public Algorithm {
  explicit Pbkdf2Params(Handle h) noexcept;
public:
    static Pbkdf2Params take_ownership(Handle h) noexcept;
    explicit Pbkdf2Params(const emlite::Val &val) noexcept;
    Pbkdf2Params() noexcept;
    [[nodiscard]] Pbkdf2Params clone() const noexcept;
    [[nodiscard]] jsbind::Any salt() const;
    void salt(const jsbind::Any& value);
    [[nodiscard]] unsigned long iterations() const;
    void iterations(unsigned long value);
    [[nodiscard]] jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
};

} // namespace webbind