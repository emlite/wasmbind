#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TokenBinding
/// [`TokenBinding`](https://developer.mozilla.org/en-US/docs/Web/API/TokenBinding)
class TokenBinding : public emlite::Val {
  explicit TokenBinding(Handle h) noexcept;
public:
    static TokenBinding take_ownership(Handle h) noexcept;
    explicit TokenBinding(const emlite::Val &val) noexcept;
    TokenBinding() noexcept;
    [[nodiscard]] TokenBinding clone() const noexcept;
    [[nodiscard]] jsbind::String status() const;
    void status(const jsbind::String& value);
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
};

} // namespace webbind