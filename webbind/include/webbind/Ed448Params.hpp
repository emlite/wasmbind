#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type Ed448Params
/// [`Ed448Params`](https://developer.mozilla.org/en-US/docs/Web/API/Ed448Params)
class Ed448Params : public Algorithm {
  explicit Ed448Params(Handle h) noexcept;
public:
    static Ed448Params take_ownership(Handle h) noexcept;
    explicit Ed448Params(const emlite::Val &val) noexcept;
    Ed448Params() noexcept;
    [[nodiscard]] Ed448Params clone() const noexcept;
    [[nodiscard]] jsbind::Any context() const;
    void context(const jsbind::Any& value);
};

} // namespace webbind