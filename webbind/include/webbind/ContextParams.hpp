#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type ContextParams
class ContextParams : public Algorithm {
  explicit ContextParams(Handle h) noexcept;
public:
    static ContextParams take_ownership(Handle h) noexcept;
    explicit ContextParams(const emlite::Val &val) noexcept;
    ContextParams() noexcept;
    [[nodiscard]] ContextParams clone() const noexcept;
    /// Getter of the `context` attribute.
    [[nodiscard]] jsbind::Any context() const;
    /// Setter of the `context` attribute.
    void context(const jsbind::Any& value);
};

} // namespace webbind