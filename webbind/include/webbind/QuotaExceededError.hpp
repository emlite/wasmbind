#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMException.hpp"

namespace webbind {

class QuotaExceededErrorOptions;

/// Interface QuotaExceededError
/// [`QuotaExceededError`](https://developer.mozilla.org/en-US/docs/Web/API/QuotaExceededError)
class QuotaExceededError : public DOMException {
    explicit QuotaExceededError(Handle h) noexcept;
public:
    explicit QuotaExceededError(const emlite::Val &val) noexcept;
    static QuotaExceededError take_ownership(Handle h) noexcept;
    [[nodiscard]] QuotaExceededError clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new QuotaExceededError(..)` constructor, creating a new QuotaExceededError instance
    QuotaExceededError();
    /// The `new QuotaExceededError(..)` constructor, creating a new QuotaExceededError instance
    QuotaExceededError(const jsbind::String& message);
    /// The `new QuotaExceededError(..)` constructor, creating a new QuotaExceededError instance
    QuotaExceededError(const jsbind::String& message, const QuotaExceededErrorOptions& options);
    /// [`QuotaExceededError.quota`](https://developer.mozilla.org/en-US/docs/Web/API/QuotaExceededError/quota)
    /// [`QuotaExceededError.quota`](https://developer.mozilla.org/en-US/docs/Web/API/QuotaExceededError/quota)
    [[nodiscard]] double quota() const;
    /// [`QuotaExceededError.requested`](https://developer.mozilla.org/en-US/docs/Web/API/QuotaExceededError/requested)
    /// [`QuotaExceededError.requested`](https://developer.mozilla.org/en-US/docs/Web/API/QuotaExceededError/requested)
    [[nodiscard]] double requested() const;
};

} // namespace webbind