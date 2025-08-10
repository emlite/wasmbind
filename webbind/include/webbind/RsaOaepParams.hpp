#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type RsaOaepParams
class RsaOaepParams : public Algorithm {
  explicit RsaOaepParams(Handle h) noexcept;
public:
    static RsaOaepParams take_ownership(Handle h) noexcept;
    explicit RsaOaepParams(const emlite::Val &val) noexcept;
    RsaOaepParams() noexcept;
    [[nodiscard]] RsaOaepParams clone() const noexcept;
    /// Getter of the `label` attribute.
    [[nodiscard]] jsbind::Any label() const;
    /// Setter of the `label` attribute.
    void label(const jsbind::Any& value);
};

} // namespace webbind