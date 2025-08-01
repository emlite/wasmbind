#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class SubtleCrypto;


/// The Crypto class.
/// [`Crypto`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto)
class Crypto : public emlite::Val {
    explicit Crypto(Handle h) noexcept;

public:
    explicit Crypto(const emlite::Val &val) noexcept;
    static Crypto take_ownership(Handle h) noexcept;

    [[nodiscard]] Crypto clone() const noexcept;
    /// Getter of the `subtle` attribute.
    /// [`Crypto.subtle`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/subtle)
    [[nodiscard]] SubtleCrypto subtle() const;
    /// The getRandomValues method.
    /// [`Crypto.getRandomValues`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/getRandomValues)
    jsbind::Any getRandomValues(const jsbind::Any& array);
    /// The randomUUID method.
    /// [`Crypto.randomUUID`](https://developer.mozilla.org/en-US/docs/Web/API/Crypto/randomUUID)
    jsbind::String randomUUID();
};

