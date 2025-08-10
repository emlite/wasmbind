#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface CryptoKey
/// [`CryptoKey`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey)
class CryptoKey : public emlite::Val {
    explicit CryptoKey(Handle h) noexcept;
public:
    explicit CryptoKey(const emlite::Val &val) noexcept;
    static CryptoKey take_ownership(Handle h) noexcept;
    [[nodiscard]] CryptoKey clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`CryptoKey.type`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/type)
    /// [`CryptoKey.type`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/type)
    [[nodiscard]] KeyType type() const;
    /// [`CryptoKey.extractable`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/extractable)
    /// [`CryptoKey.extractable`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/extractable)
    [[nodiscard]] bool extractable() const;
    /// [`CryptoKey.algorithm`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/algorithm)
    /// [`CryptoKey.algorithm`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/algorithm)
    [[nodiscard]] jsbind::Object algorithm() const;
    /// [`CryptoKey.usages`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/usages)
    /// [`CryptoKey.usages`](https://developer.mozilla.org/en-US/docs/Web/API/CryptoKey/usages)
    [[nodiscard]] jsbind::Object usages() const;
};

} // namespace webbind