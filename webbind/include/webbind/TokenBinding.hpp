#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TokenBinding
class TokenBinding : public emlite::Val {
  explicit TokenBinding(Handle h) noexcept;
public:
    static TokenBinding take_ownership(Handle h) noexcept;
    explicit TokenBinding(const emlite::Val &val) noexcept;
    TokenBinding() noexcept;
    [[nodiscard]] TokenBinding clone() const noexcept;
    /// Getter of the `status` attribute.
    [[nodiscard]] jsbind::String status() const;
    /// Setter of the `status` attribute.
    void status(const jsbind::String& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
};

} // namespace webbind