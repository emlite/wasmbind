#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "IDBRequest.hpp"

namespace webbind {

/// Interface IDBOpenDBRequest
/// [`IDBOpenDBRequest`](https://developer.mozilla.org/en-US/docs/Web/API/IDBOpenDBRequest)
class IDBOpenDBRequest : public IDBRequest {
    explicit IDBOpenDBRequest(Handle h) noexcept;
public:
    explicit IDBOpenDBRequest(const emlite::Val &val) noexcept;
    static IDBOpenDBRequest take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBOpenDBRequest clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `onblocked` attribute.
    /// [`IDBOpenDBRequest.onblocked`](https://developer.mozilla.org/en-US/docs/Web/API/IDBOpenDBRequest/onblocked)
    [[nodiscard]] jsbind::Any onblocked() const;
    /// Setter of the `onblocked` attribute.
    /// [`IDBOpenDBRequest.onblocked`](https://developer.mozilla.org/en-US/docs/Web/API/IDBOpenDBRequest/onblocked)
    void onblocked(const jsbind::Any& value);
    /// Getter of the `onupgradeneeded` attribute.
    /// [`IDBOpenDBRequest.onupgradeneeded`](https://developer.mozilla.org/en-US/docs/Web/API/IDBOpenDBRequest/onupgradeneeded)
    [[nodiscard]] jsbind::Any onupgradeneeded() const;
    /// Setter of the `onupgradeneeded` attribute.
    /// [`IDBOpenDBRequest.onupgradeneeded`](https://developer.mozilla.org/en-US/docs/Web/API/IDBOpenDBRequest/onupgradeneeded)
    void onupgradeneeded(const jsbind::Any& value);
};

} // namespace webbind