#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type Ed448Params
class Ed448Params : public Algorithm {
  explicit Ed448Params(Handle h) noexcept;
public:
    static Ed448Params take_ownership(Handle h) noexcept;
    explicit Ed448Params(const emlite::Val &val) noexcept;
    Ed448Params() noexcept;
    [[nodiscard]] Ed448Params clone() const noexcept;
    /// Getter of the `context` attribute.
    [[nodiscard]] jsbind::Any context() const;
    /// Setter of the `context` attribute.
    void context(const jsbind::Any& value);
};

} // namespace webbind