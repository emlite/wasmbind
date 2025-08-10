#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type KeyAlgorithm
/// [`KeyAlgorithm`](https://developer.mozilla.org/en-US/docs/Web/API/KeyAlgorithm)
class KeyAlgorithm : public emlite::Val {
  explicit KeyAlgorithm(Handle h) noexcept;
public:
    static KeyAlgorithm take_ownership(Handle h) noexcept;
    explicit KeyAlgorithm(const emlite::Val &val) noexcept;
    KeyAlgorithm() noexcept;
    [[nodiscard]] KeyAlgorithm clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind