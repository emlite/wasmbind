#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type KeyAlgorithm
class KeyAlgorithm : public emlite::Val {
  explicit KeyAlgorithm(Handle h) noexcept;
public:
    static KeyAlgorithm take_ownership(Handle h) noexcept;
    explicit KeyAlgorithm(const emlite::Val &val) noexcept;
    KeyAlgorithm() noexcept;
    [[nodiscard]] KeyAlgorithm clone() const noexcept;
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
};

} // namespace webbind