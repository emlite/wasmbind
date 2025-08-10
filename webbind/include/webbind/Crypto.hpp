#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SubtleCrypto;

/// Interface Crypto
/// [`Crypto`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto)
class Crypto : public emlite::Val {
    explicit Crypto(Handle h) noexcept;
public:
    explicit Crypto(const emlite::Val &val) noexcept;
    static Crypto take_ownership(Handle h) noexcept;
    [[nodiscard]] Crypto clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Crypto.subtle`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/subtle)
    /// [`Crypto.subtle`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/subtle)
    [[nodiscard]] SubtleCrypto subtle() const;
    /// The getRandomValues method.
    /// [`Crypto.getRandomValues`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/getRandomValues)
    jsbind::Any getRandomValues(const jsbind::Any& array);
    /// The randomUUID method.
    /// [`Crypto.randomUUID`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/randomUUID)
    jsbind::String randomUUID();
};

} // namespace webbind